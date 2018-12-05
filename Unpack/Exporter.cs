using System;
using System.IO;

namespace Unpack
{
    class Exporter
    {
        public static void ExportBMP(string fileName, int width, int height, byte[] bytes)
        {
            if(bytes.Length % 4 != 0)
                return;

            using (FileStream fs = new FileStream(fileName, FileMode.Create))
            {
                BinaryWriter bw = new BinaryWriter(fs);

                // fileheader
                WriteBytes(bw, 0x42, 0x4d); // 开头 00 - 01
                //WriteInt64(bw, 0xa30ce); // 文件长度 02 - 05  [?]
                WriteInt64(bw, bytes.Length + 0x40);
                WriteInt32(bw, 0); // 保留字1 06 - 07
                WriteInt32(bw, 0); // 保留字1 08 - 09
                WriteInt64(bw, 54); // dib 数据偏移量 0a - 0d (1)  [?]
                // infoheader
                WriteInt64(bw, 40); // 结构体长度 0e - 11   [?]
                WriteInt64(bw, width); // 宽 12 - 15  [?]
                WriteInt64(bw, height); // 高 16 - 19  [?]
                WriteInt32(bw, 1); // 平面数 = 1 1a - 1b
                WriteInt32(bw, 32); // 颜色位数  1c - 1d (2) [?]
                WriteInt64(bw, 0); // 不压缩 1e - 21
                WriteInt64(bw, 0); // 实际字节数 22 - 25 [?]
                WriteInt64(bw, 0); 
                WriteInt64(bw, 0);
                WriteInt64(bw, 0); // 2^ 颜色位数
                WriteInt64(bw, 0); // - 35 = (1) [?]
                // 颜色板 (标记(2)处 < 16 -- 1 位图(两种颜色)， 4 位图(16种颜色)， 8 位图(256种颜色) 的情况下)

                // 颜色区
                for (int i = 0; i < width * height; i++)
                {
                    int start = i*4;
                    WriteBytes(bw, bytes[start], bytes[start + 1], bytes[start + 2], bytes[start + 3]);
                }
            }
        }

        public static void ExportBMP(string fileName, FileReader fr)
        {
            using (FileStream fs = new FileStream(fileName, FileMode.Create))
            {
                BinaryWriter bw = new BinaryWriter(fs);

                fr.Seek(0x14);
                //Console.WriteLine(fr.ReadByte().ToString("X"));
                long width = fr.ReadInt64();
                long height = fr.ReadInt64();
                Console.WriteLine(width.ToString("X") + " " + height.ToString("X"));
                fr.ReadInt64();
                fr.ReadInt64();
                for (int i = 0; i < height; i++)
                {
                    fr.ReadInt64();
                }
                long size = width*height*4;
                // fileheader
                WriteBytes(bw, 0x42, 0x4d); // 开头 00 - 01
                WriteInt64(bw, size + 0x40); // 文件长度 02 - 05  [?]
                WriteInt32(bw, 0); // 保留字1 06 - 07
                WriteInt32(bw, 0); // 保留字1 08 - 09
                WriteInt64(bw, 54); // dib 数据偏移量 0a - 0d (1)  [?]
                // infoheader
                WriteInt64(bw, 40); // 结构体长度 0e - 11   [?]
                WriteInt64(bw, width); // 宽 12 - 15  [?]
                WriteInt64(bw, height); // 高 16 - 19  [?]
                WriteInt32(bw, 1); // 平面数 = 1 1a - 1b
                WriteInt32(bw, 32); // 颜色位数  1c - 1d (2) [?]
                WriteInt64(bw, 0); // 不压缩 1e - 21
                WriteInt64(bw, 0); // 实际字节数 22 - 25 [?]
                WriteInt64(bw, 0);
                WriteInt64(bw, 0);
                WriteInt64(bw, 0); // 2^ 颜色位数
                WriteInt64(bw, 0); // - 35 = (1) [?]
                // 颜色板 (标记(2)处 < 16 -- 1 位图(两种颜色)， 4 位图(16种颜色)， 8 位图(256种颜色) 的情况下)

                // 颜色区
                // bmp 文件的像素从下往上，数据区从上往下，所以先把图片像素全部天秤 0，然后倒着填充实际数据
                for (int i = 0; i < size; i++)
                {
                    WriteBytes(bw, 0);
                }

                for (int i = 0; i < height; i++)
                {
                    long start = (height - i - 1)*width*4 + 0x36;

                    int begin = fr.ReadInt32();
                    int index = 0;
                    Console.WriteLine(begin.ToString("X"));
                    while (begin != 0xffff)
                    {
                        fs.Seek(start + begin*4, SeekOrigin.Begin);
                        int length = fr.ReadInt32();
                        for (int j = 0; j < length; j++, index++)
                        {
                            byte[] bytes = ColorTransfer(fr.ReadInt32());
                            WriteBytes(bw, bytes[0], bytes[1], bytes[2], bytes[3]);
                        }
                        begin = fr.ReadInt32();
                        Console.WriteLine(begin.ToString("X"));
                    }
                }
            }
        }

        public static void ExportPNG(string fileName, FileReader fr)
        {
            using (FileStream fs = new FileStream(fileName, FileMode.Create))
            {
                BinaryWriter bw = new BinaryWriter(fs);
                fr.Seek(0x14);
                long width = fr.ReadInt64();
                long height = fr.ReadInt64();
                // 一堆看不懂的东西，不晓得啥用...
                fr.ReadInt64();
                fr.ReadInt64();
                for (int i = 0; i < height; i++)
                {
                    fr.ReadInt64();
                }
                long size = width * height;
                WriteBytes(bw, 0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A); // 文件头
                WriteBytes(bw, 00, 00, 00, 0x0d); // IHDR 头长为 13
                WriteBytes(bw, 0x49, 0x48, 0x44, 0x52); // IHDR 标记
                WriteInt64BigEnding(bw, width); // 宽
                WriteInt64BigEnding(bw, height); // 高
                WriteInt16(bw, 0x08);
                WriteInt16(bw, 0x02);
                WriteInt16(bw, 0x00);
                WriteInt16(bw, 0x00);
                WriteInt16(bw, 0x00);
                WriteBytes(bw, 00, 00, 00, 00);
                for (int i = 0; i < size; i++)
                {
                    WriteBytes(bw, 00, 00, 00, 00);
                }
                WriteBytes(bw, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4E, 0x44, 0xAE, 0x42, 0x60, 0x82); // 文件结尾

            }
        }

        public static void ExportWAV()
        {
            string filePath = @"C:\Users\ganquan.zheng\Desktop\1.wav";

            using (FileStream fs = new FileStream(filePath, FileMode.Create))
            {
                BinaryWriter bw = new BinaryWriter(fs);

                WriteBytes(bw, 0x52, 0x49, 0x46, 0x46); // 文件头 RIFF [0-3]
                WriteInt64(bw, 0x1000);// 文件大小 [4-7]
                WriteBytes(bw, 0x57, 0x41, 0x56, 0x45, 0x66, 0x6d, 0x74, 0x20); // WAVEfmt [8-f]
                WriteInt64(bw, 0x12); // PCMWAVEFORMAT 长度 [10-13]
                WriteInt32(bw, 0x01); // 编码格式 [14-15]
                WriteInt32(bw, 0x01); // 单声道 [16-17]
                WriteInt64(bw, 0x5622); // 22 56 采样频率 [18-1b]
                WriteInt64(bw, 0xac44); // 44 ac 每秒数据量

            }
        }

        public static byte[] ColorTransfer(int value)
        {
            int r = (value & 0x1f) << 3; // 1 1111
            int g = (value & 0x7e0) >> 3; // 111 1110 0000
            int b = (value & 0xf800) >> 8; // 1111 1000 0000 0000

            if (r == 0 && g == 0 && b == 0)
            {
                return new byte[] { (byte)r, (byte)g, (byte)b, 0 };
            }

            return new byte[]{(byte)r, (byte)g, (byte)b, 255};
        }

        public static void ExportWAV(string fileName, byte[] bytes)
        {
            using (FileStream fs = new FileStream(fileName, FileMode.Create))
            {
                BinaryWriter bw = new BinaryWriter(fs);
            }
        }

        private static void WriteBytes(BinaryWriter bw, params byte[] bytes)
        {
            for (int i = 0; i < bytes.Length; i++)
            {
                bw.Write(bytes[i]);
            }
        }

        private static void WriteInt64BigEnding(BinaryWriter bw, long value)
        {
            WriteBytes(bw, (byte) (value >> 24 & 0xff), (byte) (value >> 16 & 0xff), (byte) (value >> 8 & 0xff), (byte) (value & 0xff));
        }

        private static void WriteInt64(BinaryWriter bw, long value)
        {
            WriteBytes(bw, (byte)(value & 0xff), (byte)(value >> 8 & 0xff), (byte)(value >> 16 & 0xff), (byte)(value >> 24 & 0xff));
        }

        private static void WriteInt32(BinaryWriter bw, int value)
        {
            WriteBytes(bw, (byte) (value & 0xff), (byte) (value >> 8 & 0xff));
        }

        private static void WriteInt16(BinaryWriter bw, int value)
        {
            WriteBytes(bw, (byte)(value & 0xff));
        }
    }
}
