using System;
using System.Collections.Generic;
using System.IO;

namespace Unpack
{
    class Counter
    {
        public void DoCount()
        {
            string filePath = @"C:\Users\ganquan.zheng\Desktop\新建文件夹 (2)\1-1.bmp";
            DoCount(filePath);

            //string filePath = @"C:\Users\ganquan.zheng\Desktop\新建文件夹 (2)\3904-1.bmp";
            //DoCount(filePath);
            //filePath = @"C:\Users\ganquan.zheng\Desktop\新建文件夹 (2)\3905-1.bmp";
            //DoCount(filePath);
            //filePath = @"C:\Users\ganquan.zheng\Desktop\新建文件夹 (2)\3906-1.bmp";
            //DoCount(filePath);
            //filePath = @"C:\Users\ganquan.zheng\Desktop\新建文件夹 (2)\3907-1.bmp";
            //DoCount(filePath);
            //filePath = @"C:\Users\ganquan.zheng\Desktop\新建文件夹 (2)\3908-1.bmp";
            //DoCount(filePath);
        }

        private void DoCount(string filePath)
        {
            using (FileStream fs = new FileStream(filePath, FileMode.Open))
            {
                FileReader fr = new FileReader(fs);

                fr.Seek(0x12);

                int weight = (int)fr.ReadInt64();
                int height = (int)fr.ReadInt64Complement();

                fr.Seek(0x36 - 0x12 - 4 - 4);

                List<Color> list = new List<Color>();

                int cnt = weight * height;
                int nonzero = 0;
                for (int i = 0; i < cnt; i++)
                {
                    Color color = fr.ReadColor();
                    if (!list.Contains(color))
                    {
                        list.Add(color);
                    }
                    if (color.IsEmpty())
                    {
                        nonzero++;
                    }
                    else
                    {
                        break;
                    }
                }

                Console.WriteLine(list.Count + " " + list.Count.ToString("X") + " " + nonzero + " " + nonzero.ToString("x"));

                //Console.WriteLine(fr.ReadColor());
                //Console.WriteLine(fr.ReadColor());
                //Console.WriteLine(fr.ReadColor());
            }
        }

        public void DoCount2(string filePath)
        {
            using (FileStream fs = new FileStream(filePath, FileMode.Open))
            {
                FileReader fr = new FileReader(fs);

                int tlhsCnt = 0;
                int worlCnt = 0;

                string WORL = "WORL";
                string TLHS = "TLHS";

                try
                {
                    while (true)
                    {
                        byte @byte = fr.ReadByte();
                        if (@byte == WORL[0])
                        {
                            @byte = fr.ReadByte();
                            if (@byte == WORL[1])
                            {
                                @byte = fr.ReadByte();
                                if (@byte == WORL[2])
                                {
                                    @byte = fr.ReadByte();
                                    if (@byte == WORL[3])
                                    {
                                        worlCnt++;
                                    }
                                    else
                                    {
                                        fr.Seek(-3);
                                    }
                                }
                                else
                                {
                                    fr.Seek(-2);
                                }
                            }
                            else
                            {
                                fr.Seek(-1);
                            }
                        }
                        else if (@byte == TLHS[0])
                        {
                            @byte = fr.ReadByte();
                            if (@byte == TLHS[1])
                            {
                                @byte = fr.ReadByte();
                                if (@byte == TLHS[2])
                                {
                                    @byte = fr.ReadByte();
                                    if (@byte == TLHS[3])
                                    {
                                        tlhsCnt++;
                                    }
                                    else
                                    {
                                        fr.Seek(-3);
                                    }
                                }
                                else
                                {
                                    fr.Seek(-2);
                                }
                            }
                            else
                            {
                                fr.Seek(-1);
                            }
                        }
                    }

                }
                catch (Exception)
                {

                }
                finally
                {
                    Console.WriteLine(fr.GetPos() + " TLHS: " + tlhsCnt + " WORL: " + worlCnt);
                }

            }
        }
    }
}
