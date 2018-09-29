using System;
using System.Diagnostics;
using System.IO;
using System.Text;

namespace Unpack
{
    class Unpacker
    {
        private Encoding encodeBig5 = Encoding.GetEncoding("BIG5");
        private Encoding encodeAscII = Encoding.ASCII;

        private string inputDoc;
        private string outputDoc;

        /// <summary>
        /// 文件指针位置
        /// </summary>
        private int pos;

        public Unpacker(string inputDoc, string outputDoc)
        {
            this.inputDoc = inputDoc;
            this.outputDoc = outputDoc;
        }

        public void DoUnpack()
        {
            string pak = inputDoc + "hsl.pak";
            //string pak = inputDoc + "movie.pak";
            using (FileStream fs = new FileStream(pak, FileMode.Open))
            {
                BinaryReader br = new BinaryReader(fs);

                // PAKS
                ReadByte(br);
                ReadByte(br);
                ReadByte(br);
                ReadByte(br);

                ReadBytes(br, 0x18 - 4);

                ReadPage(br, 0x1f);
                ReadPage(br, 0x03);
                ReadPage(br, 0x17);

                ReadBytes(br, 36); // cue 线索
                ReadVersion(br);

                ReadPage(br, 0x68);
                ReadPage(br, 0x39);
                ReadPage(br, 0x02);

                int number = 0;

                while (true)
                {
                    try
                    {
                        ReadFile(br);
                        number++;
                    }
                    catch (Exception)
                    {
                        break;
                    }
                }

                Console.WriteLine("cnt = " + number.ToString("X") + " pos = " + GetPos());

                //Console.WriteLine(ReadString(br, 1));

                //for (int i = 0; i < 10; i++)
                //{
                //    AA(br);
                //}

                //AA(br);
                //AA(br);
                //AA(br);
                //AA(br);
                //AA(br);

                //cnt = 0;
                //byte[] bytes = br.ReadBytes(0x18);

                ////byte[] bytes = br.ReadBytes(0x46);
                ////byte[] bytes = br.ReadBytes(0x3e);

                //bytes = br.ReadBytes(0x4);

                ////Console.WriteLine(br.ReadByte().ToString("X"));
                ////Console.WriteLine(br.ReadByte().ToString("X"));
                ////Console.WriteLine(br.ReadByte().ToString("X"));
                ////Console.WriteLine(br.ReadByte().ToString("X"));

                //Console.WriteLine(Bytes2StringEncodeBig5(bytes));
                ////Console.WriteLine(Bytes2StringAscII(bytes));

                //Console.WriteLine(Bytes2StringEncodeBig5(bytes));



                //byte byte1 = br.ReadByte();
                //byte byte2 = br.ReadByte();

                //int a = byte1*0x100 + byte2;

                ////byte[] bytes = fs.ReadByte(2);
                //Console.WriteLine(a.ToString("x"));

                //StreamReader sr = new StreamReader(fs, Encoding.GetEncoding("BIG5"));
                //string str = sr.ReadLine();

                //while (str != null)
                //{
                //    if (str.StartsWith("magic_water") && !str.EndsWith("0")) 
                //    {
                //        break;
                //    }
                //    str = sr.ReadLine();
                //}

                //int i = 0;
                ////while (i < 736783)
                //while (i < 540453)
                //{
                //    i++;
                //    //if (str.StartsWith("magic_water") && !str.EndsWith("0"))
                //    //{
                //    //    break;
                //    //}
                //    str = sr.ReadLine();
                //}

                //i = 0;
                //while (i < 200)
                //{
                //    i++;
                //    str = sr.ReadLine();
                //    Console.WriteLine(str);
                //}

                // 733085 - 536756

                //Console.WriteLine(str);


                //BinaryReader br = new BinaryReader(fs);

                //byte[] bytes = br.ReadBytes(4);

                //Console.WriteLine(Byte2String(bytes));

                //int a = 0;
                //string str = "";
                //while (a < 5)
                //{
                //    a++;
                //    str += br.ReadChar();
                //}

                //Console.WriteLine(str);

                //byte[] bytes = br.ReadBytes(24);

                //Console.WriteLine(br.ReadInt16());
                //Console.WriteLine(br.ReadInt32());
                //Console.WriteLine(br.ReadInt64());

                //StreamReader sr = new StreamReader(fs);
                //string str = sr.ReadLine();
                //int a = 0;
                //while (a < 0)
                //{
                //    a++;
                //    str = sr.ReadLine();
                //}
                //Console.WriteLine(str);
            }
        }

        public void ReadDefine()
        {
            using (FileStream fs = new FileStream(@"E:\Dirties\HSL\Resource\hsl.pak", FileMode.Open))
            {
                FileReader fr = new FileReader(fs);
                int start = 0x07843db3;
                int end = 0x07bc0c46;
                using (FileStream fs2 = new FileStream(@"E:\Dirties\HSL\Resource\before.pak", FileMode.Create))
                {
                    byte[] bytes = fr.ReadBytes(start);
                    BinaryWriter bw = new BinaryWriter(fs2);
                    bw.Write(bytes);
                }
                using (FileStream fs2 = new FileStream(@"E:\Dirties\HSL\Resource\define.pak", FileMode.Create))
                {
                    byte[] bytes = fr.ReadBytes(end - start + 1);
                    BinaryWriter bw = new BinaryWriter(fs2);
                    bw.Write(bytes);
                }
                using (FileStream fs2 = new FileStream(@"E:\Dirties\HSL\Resource\after.pak", FileMode.Create))
                {
                    //long length = fs.Seek(0, SeekOrigin.End);
                    //fs.Seek(0, SeekOrigin.Begin);
                    //fr.Seek(end + 1);
                    //byte[] bytes = fr.ReadBytes((int)(length - end));
                    BinaryWriter bw = new BinaryWriter(fs2);
                    //bw.Write(bytes);
                    try
                    {
                        long value = fr.ReadInt64();
                        int i = 0;
                        while (i < 10000)
                        {
                            bw.Write(value);
                            value = fr.ReadInt64();
                            i++;
                        }
                    }
                    catch (Exception)
                    {
                    }
                }
            }
        }

        private void ReadPage(BinaryReader br, int cnt)
        {
            Console.WriteLine();

            int number = 0;

            for (int i = 0; i < cnt; i++)
            {
                ReadFile(br);
                number++;
            }

            Console.WriteLine("read number = " + number.ToString("X") + " pos = " + GetPos());

            ReadVersion(br);
        }

        protected virtual string str{ get; private set; }

        private int index = 0;

        private void ReadFile(BinaryReader br)
        {
            int headCnt = 0x24; // 36

            byte[] bytes = ReadBytes(br, headCnt);

            using (FileStream fs = new FileStream(outputDoc + index + ".txt", FileMode.Create))
            {
                BinaryWriter bw = new BinaryWriter(fs);
                bw.Write(bytes);

                bytes = ReadBytes(br, 2);
                bw.Write(bytes);

                if (bytes[0] == 0xa8 && bytes[1] == 0xa8)
                {
                    string data = ReadString(br, 4);
                    Check(data == "data");
                    int number = ReadInt64(br);
                    //ReadBytes(br, number);
                    bytes = ReadContent(br, ref number);
                    Console.WriteLine("a8a8 number = 0x" + number.ToString("X") + "\t" + number);
                }
                else if (bytes[0] == 0xcc && bytes[1] == 0xc9)
                {
                    string ta = ReadString(br, 2);
                    Check(ta == "ta");
                    int number = ReadInt64(br);
                    //ReadBytes(br, number);
                    bytes = ReadContent(br, ref number);
                    Console.WriteLine("ccc9 number = 0x" + number.ToString("X") + " \t" + number);
                }
                else
                {
                    throw new Exception("aaa");
                }

                bw.Write(bytes);
            }

            index++;

            //throw new Exception("aaa");

            //bytes = ReadBytes(br, 2);

            //if (bytes[0] == 0xa8 && bytes[1] == 0xa8)
            //{
            //    string data = ReadString(br, 4);
            //    Check(data == "data");
            //    int number = ReadInt64(br);
            //    //ReadBytes(br, number);
            //    bytes = ReadContent(br, ref number);
            //    Console.WriteLine("a8a8 number = 0x" + number.ToString("X") + "\t" + number);
            //    //BuildPNG(bytes);
            //}
            //else if (bytes[0] == 0xcc && bytes[1] == 0xc9)
            //{
            //    string ta = ReadString(br, 2);
            //    Check(ta == "ta");
            //    int number = ReadInt64(br);
            //    //ReadBytes(br, number);
            //    bytes = ReadContent(br, ref number);
            //    Console.WriteLine("ccc9 number = 0x" + number.ToString("X") + " \t" + number);
            //}
            //else
            //{
            //    throw new Exception("aaa");
            //}
        }

        private byte[] ReadContent(BinaryReader br, ref int cnt)
        {
            if (cnt%2 != 0)
            {
                cnt ++;
            }

            return ReadBytes(br, cnt);
        }

        private void ReadVersion(BinaryReader br)
        {
            string list = ReadString(br, 4);
            Console.Write(list + " ");
            int strCnt = ReadInt64(br);
            Console.WriteLine(ReadString(br, strCnt));
        }

        public void BuildPNG(byte[] bytes)
        {
            // ac3 - 8471

            //string pngName = outputDoc + "test.png";
            //using (FileStream fs = new FileStream(pngName, FileMode.Create))
            //{
            //    BinaryWriter bw = new BinaryWriter(fs);
            //    bw.Write(new byte[] {0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A}); // 开头
            //    bw.Write(new byte[] {0x00, 0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52}); // IHDR
            //    bw.Write(new byte[] {0x20, 0x20, 0x01, 0x20, 0x20, 0x20, 0x20, 0x40}); // 宽 + 高
            //    bw.Write(0x10); // 色深
            //    bw.Write(0x06); // 颜色类型
            //    bw.Write(0x00); // PNG Spec规定此处总为0
            //    bw.Write(0x00); // PNG Spec规定此处总为0
            //    bw.Write(0x00); // 隔行扫描方法
            //    bw.Write(new byte[] {0xa5, 0xcd, 0x75, 0xfd}); // CRC 校验
            //    for (int i = 0; i < 256; i++)
            //    {
            //        bw.Write(new byte[] { 0xff, 0x00, 0x00 });
            //    }
            //    for (int i = 0; i < 256*64; i++)
            //    {
            //        bw.Write(0);
            //    }
            //    bw.Write(new byte[] {0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4E, 0x44, 0xAE, 0x42, 0x60, 0x82}); // 结尾
            //}

            string pngName = outputDoc + "test.bmp";
            //Exporter.ExportBMP(pngName, bytes);
        }

        public void Test()
        {
            string pak = @"E:\Dirties\HSL\Resource\hsl.pak";
            using (FileStream fs = new FileStream(pak, FileMode.Open))
            {
                //fs.Seek(0x0ec2ca6d, SeekOrigin.Begin);
                fs.Seek(0x06275ae4, SeekOrigin.Begin);
                BinaryReader br = new BinaryReader(fs);
                int width = ReadInt64(br);
                int height = ReadInt64(br);
                Console.WriteLine(width + " " + height);
                //byte[] bytes = ReadBytes(br, 20);
                byte[] bytes = ReadBytes(br, width * height * 4);
                string pngName = outputDoc + "test.bmp";
                //Exporter.ExportBMP(pngName, width, height, bytes);
                Exporter.ExportBMP(pngName, height, width, bytes);
            }
        }

        public void Seperate()
        {
            string pak = inputDoc + "hsl.pak";
            //string pak = inputDoc + "movie.pak";
            using (FileStream fs = new FileStream(pak, FileMode.Open))
            {
                BinaryReader br = new BinaryReader(fs);

                int buffer = 1024*1024;

                int cnt = 0;

                while (true)
                {
                    bool complete = false;

                    using (FileStream fs2 = new FileStream(inputDoc + "hsl_" + cnt + ".pak", FileMode.Create))
                    {
                        BinaryWriter bw = new BinaryWriter(fs2);

                        for (int i = 0; i < 10; i++)
                        {
                            byte[] bytes = br.ReadBytes(buffer);

                            if (bytes.Length > 0)
                            {
                                bw.Write(bytes);
                            }
                            else
                            {
                                complete = true;
                            }
                        }
                    }

                    cnt++;

                    if (complete)
                        break;
                   
                }
            }
        }

        private string Bytes2String(byte[] bytes, Encoding encoding)
        {
            return encoding.GetString(bytes);
        }

        private string Bytes2StringEncodeBig5(byte[] bytes)
        {
            return Bytes2String(bytes, encodeBig5);
        }

        private string Bytes2StringAscII(byte[] bytes)
        {
            return Bytes2String(bytes, encodeAscII);
        }

        private byte[] ReadBytes(BinaryReader br, int cnt)
        {
            this.pos += cnt;
            return br.ReadBytes(cnt);
        }

        private byte ReadByte(BinaryReader br)
        {
            this.pos ++;
            return br.ReadByte();
        }

        private int ReadInt64(BinaryReader br)
        {
            byte[] bytes = ReadBytes(br, 4);

            return bytes[0] | bytes[1] << 8 | bytes[2]<<16 | bytes[3]<<24;
        }

        private char ReadChar(BinaryReader br)
        {
            char ret = br.ReadChar();
            this.pos ++;
            return ret;
        }

        private string ReadString(BinaryReader br, int cnt)
        {
            byte[] bytes = ReadBytes(br, cnt);
            return Bytes2StringEncodeBig5(bytes);
        }

        private void Check(bool value)
        {
            Debug.Assert(value);
        }

        private string GetPos()
        {
            return this.pos.ToString("X") + " l: " + this.pos/16;
        }

        //private int Bytes2Int(byte[] bytes)
        //{
        //    int value = (int)
        //}
    }
}
