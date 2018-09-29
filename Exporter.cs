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

        private static void WriteInt64(BinaryWriter bw, int value)
        {
            WriteBytes(bw, (byte) (value & 0xff), (byte) (value >> 8 & 0xff), (byte) (value >> 16 & 0xff), (byte) (value >> 24 & 0xff));
        }

        private static void WriteInt32(BinaryWriter bw, int value)
        {
            WriteBytes(bw, (byte) (value & 0xff), (byte) (value >> 8 & 0xff));
        }

    }
}
