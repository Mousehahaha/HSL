using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;

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

        protected virtual string str { get; private set; }

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

        public void Shp2Bmp()
        {
            string parent = @"C:\Users\ganquan.zheng\Desktop\HSL pak";

            string[] docs = {"shape", "shape01", "shape11", "shape21", "shape31", "shape41", "shape99"};

            string output = Path.Combine(parent, "bmp");

            //string[] docs = { "animal" };

            //string output = Path.Combine(parent, "animal");

            //string[] docs = { "magic" };

            //string output = Path.Combine(parent, "magic");

            for (int i = 0; i < docs.Length; i++)
            {
                string doc = Path.Combine(parent, docs[i]);

                string[] files = Directory.GetFiles(doc, "*.SHP", SearchOption.TopDirectoryOnly);

                string outputDoc = Path.Combine(output, docs[i]);

                if (Directory.Exists(outputDoc))
                {
                    Directory.Delete(outputDoc, true);
                }
                Directory.CreateDirectory(outputDoc);

                for (int j = 0; j < files.Length; j++)
                {
                    string fileName = Path.GetFileNameWithoutExtension(files[j]);

                    using (FileStream fs = new FileStream(files[j], FileMode.Open))
                    {
                        FileReader fr = new FileReader(fs);

                        string bmp = Path.Combine(outputDoc, fileName + ".bmp");

                        Exporter.ExportBMP(bmp, fr);
                    }
                }
            }
        }

        public void ReadUI()
        {
            int id = 49;
            //int id = 2;

            string root = @"C:\Users\ganquan.zheng\Desktop\HSL pak\bmp\";

            string obsPath = string.Format(@"C:\Users\ganquan.zheng\Desktop\HSL pak\data\obj\OBJ-{0}.OBS", id.ToString("D3"));
            string uiOutput = string.Format(@"C:\Users\ganquan.zheng\Desktop\HSL pak\UI{0}\", id.ToString("D3"));

            Console.WriteLine(obsPath);

            //Regex regex = new Regex("SHAPE[0-9][0-9]");

            List<Object> uicomponents = new List<Object>();
            Object current = null;
            string[] lines = File.ReadAllLines(obsPath, encodeBig5);
            for (int i = 0; i < lines.Length; i++)
            {
                if (lines[i].StartsWith("[Object]"))
                {
                    current = new Object();
                    uicomponents.Add(current);
                }
                else if (lines[i].StartsWith("obj_code"))
                {
                    string[] splits = lines[i].Split('=', ';');
                    current.code = int.Parse(splits[1]);
                }
                else if (lines[i].StartsWith("obj_name"))
                {
                    string[] splits = lines[i].Split('=', ';');
                    current.name = splits[1].Trim();
                }
                else if (lines[i].StartsWith("obj_Plane"))
                {
                    string[] splits = lines[i].Split('=', ';');
                    current.plane = splits[1].Trim();
                }
                else if (lines[i].StartsWith("obj_Shape_Name"))
                {
                    string[] splits = lines[i].Split('=', ';');
                    string bmpName = splits[1].Trim().Replace(".SHP", ".bmp");
                    current.shapeName = bmpName;
                }
                else if (lines[i].StartsWith("obj_Data3"))
                {
                    string[] splits = lines[i].Split('=', ';');
                    current.data3 = splits[1].Trim();
                }
                else if (lines[i].StartsWith("obj_Data4"))
                {
                    string[] splits = lines[i].Split('=', ';');
                    current.data4 = splits[1].Trim();
                }
                else if (lines[i].StartsWith("obj_Data5"))
                {
                    string[] splits = lines[i].Split('=', ';');
                    current.data5 = splits[1].Trim();
                }
                else if (lines[i].StartsWith("obj_Data6"))
                {
                    string[] splits = lines[i].Split('=', ';');
                    current.data6 = splits[1].Trim();
                }
                else if (lines[i].StartsWith("obj_Data7"))
                {
                    string[] splits = lines[i].Split('=', ';');
                    current.data7 = splits[1].Trim();
                }
                else if (lines[i].StartsWith("obj_Data8"))
                {
                    string[] splits = lines[i].Split('=', ';');
                    current.data8 = splits[1].Trim();
                }
                else if (lines[i].StartsWith("obj_Data9"))
                {
                    string[] splits = lines[i].Split('=', ';');
                    current.data9 = splits[1].Trim();
                }
            }

            Dictionary<string, List<Object>> uiMap = new Dictionary<string, List<Object>>();

            for (int i = 0; i < uicomponents.Count; i++)
            {
                if (!uiMap.ContainsKey(uicomponents[i].plane))
                {
                    uiMap.Add(uicomponents[i].plane, new List<Object>());
                }
                uiMap[uicomponents[i].plane].Add(uicomponents[i]);
            }

            if (Directory.Exists(uiOutput))
            {
                Directory.Delete(uiOutput, true);
            }
            Directory.CreateDirectory(uiOutput);

            //foreach (var item in uiMap)
            //{
            //    string uidoc = Path.Combine(uiOutput, item.Key);
            //    Directory.CreateDirectory(uidoc);
            //    for (int i = 0; i < item.Value.Count; i++)
            //    {
            //        string bmp = Path.Combine(root, item.Value[i].shapeName);
            //        string destName = Path.Combine(uidoc, item.Value[i].name + ".bmp");
            //        string docName = Path.GetDirectoryName(destName);
            //        if (!Directory.Exists(docName))
            //        {
            //            Directory.CreateDirectory(docName);
            //        }
            //        if (!File.Exists(destName))
            //        {
            //            File.Copy(bmp, destName);
            //        }
            //    }
            //}

            for (int i = 0; i < uicomponents.Count; i++)
            {
                string bmp = Path.Combine(root, uicomponents[i].shapeName);
                string destName = Path.Combine(uiOutput, uicomponents[i].shapeName);

                string docName = Path.GetDirectoryName(destName);

                Console.WriteLine("----------------------");
                Console.WriteLine(bmp);
                Console.WriteLine(docName);

                if (!Directory.Exists(docName))
                {
                    Directory.CreateDirectory(docName);
                }

                if (!File.Exists(destName))
                {
                    File.Copy(bmp, destName);
                }
            }

            string binPath = string.Format(@"C:\Users\ganquan.zheng\Desktop\HSL pak\data\level\LEVEL{0}.BIN", id.ToString("D3"));
            string dataPath = string.Format(@"C:\Users\ganquan.zheng\Desktop\HSL pak\data{0}.txt", id.ToString("D3"));

            Dictionary<string, Object> pointDic = new Dictionary<string, Object>();
            Dictionary<string, Object> trackDic = new Dictionary<string, Object>();

            using (FileStream fs = new FileStream(binPath, FileMode.Open))
            {
                FileReader fr = new FileReader(fs);
                fr.ReadBytes(4);
                long cnt = fr.ReadInt64();
                fr.ReadBytes(8);
                for (int i = 0; i < cnt; i++)
                {
                    fr.ReadBytes(4);
                    long code = fr.ReadInt64();
                    long posX = fr.ReadInt64();
                    long posY = fr.ReadInt64();

                    for (int j = 0; j < 12*4; j++)
                    {
                        long temp = fr.ReadInt64();
                        if (temp > 0)
                        {
                            Console.Write(temp);
                        }
                    }

                    //fr.ReadBytes(12 * 16);

                    for (int j = 0; j < uicomponents.Count; j++)
                    {
                        if (uicomponents[j].code == code)
                        {
                            uicomponents[j].posX = posX;
                            uicomponents[j].posY = posY;
                            break;
                        }
                    }
                }
            }

            for (int i = 0; i < uicomponents.Count; i++)
            {
                if (uicomponents[i].shapeName.Contains("M_PNT001"))
                {
                    uicomponents[i].pivotX = 0.5f;
                    uicomponents[i].pivotY = 0.5f;
                    if (!string.IsNullOrEmpty(uicomponents[i].data9))
                    {
                        pointDic.Add(uicomponents[i].data9, uicomponents[i]);
                    }
                }
                else if (uicomponents[i].shapeName.Contains("M_TRK"))
                {
                    trackDic.Add(uicomponents[i].data9, uicomponents[i]);
                }
            }

            foreach (var item in trackDic)
            {
                Object obj = item.Value;
                if (pointDic.ContainsKey(obj.data8))
                {
                    Object from = pointDic[obj.data8];

                    //long fX = from.posX;
                    //long fY = from.posY;

                    //long x = obj.posX;
                    //long y = obj.posY;

                    long fX = obj.posX;
                    long fY = obj.posY;

                    long x = from.posX;
                    long y = from.posY;

                    if (fX >= x && fY >= y)
                    {
                        obj.pivotX = 1;
                        obj.pivotY = 0;
                    }
                    else if (fX >= x && fY < y)
                    {
                        obj.pivotX = 1;
                        obj.pivotY = 1;
                    }
                    else if (fX < x && fY < y)
                    {
                        obj.pivotX = 0;
                        obj.pivotY = 1;
                    }
                    else if (fX < x && fY >= y)
                    {
                        obj.pivotX = 0;
                        obj.pivotY = 0;
                    }
                }
            }

            using (FileStream wfs = new FileStream(dataPath, FileMode.Create, FileAccess.Write))
            {
                BinaryWriter bw = new BinaryWriter(wfs);

                bw.Write(trackDic.Count + pointDic.Count);
                foreach (var item in trackDic)
                {
                    bw.Write(item.Value.name);
                    bw.Write(item.Value.shapeName);
                    bw.Write(item.Value.posX);
                    bw.Write(item.Value.posY);
                    bw.Write(item.Value.pivotX);
                    bw.Write(item.Value.pivotY);
                }

                foreach (var item in pointDic)
                {
                    bw.Write(item.Value.name);
                    bw.Write(item.Value.shapeName);
                    bw.Write(item.Value.posX);
                    bw.Write(item.Value.posY);
                    bw.Write(item.Value.pivotX);
                    bw.Write(item.Value.pivotY);
                }
            }

            //using (FileStream wfs = new FileStream(dataPath, FileMode.Create, FileAccess.Write))
            //{
            //    BinaryWriter bw = new BinaryWriter(wfs);

            //    using (FileStream fs = new FileStream(binPath, FileMode.Open))
            //    {
            //        FileReader fr = new FileReader(fs);
            //        fr.ReadBytes(4);
            //        long cnt = fr.ReadInt64();
            //        fr.ReadBytes(8);
            //        bw.Write(cnt);
            //        for (int i = 0; i < cnt; i++)
            //        {
            //            fr.ReadBytes(4);
            //            long code = fr.ReadInt64();
            //            long posX = fr.ReadInt64();
            //            long posY = fr.ReadInt64();
            //            fr.ReadBytes(12 * 16);

            //            for (int j = 0; j < uicomponents.Count; j++)
            //            {
            //                if (uicomponents[j].code == code)
            //                {
            //                    bw.Write(uicomponents[j].shapeName);
            //                    bw.Write(posX);
            //                    bw.Write(posY);
            //                    break;
            //                }
            //            }
            //        }
            //    }
            //}
        }

        public void ReadMapDetail()
        {
            string mapworl = @"C:\Users\ganquan.zheng\Desktop\HSL pak\data\level005.wrd";
            using (FileStream fs = new FileStream(mapworl, FileMode.Open))
            {
                FileReader fr = new FileReader(fs);

                fr.ReadBytes(4); // WORL
                fr.ReadInt64();
                fr.ReadInt64();
                int width = (int) fr.ReadInt64();
                int height = (int) fr.ReadInt64();
                int size = width*height;
                List<int> list = new List<int>(size);
                for (int i = 0; i < size; i++)
                {
                    int pos = fr.ReadInt32();
                    fr.ReadBytes(2);
                    list.Add(pos);
                }

                list.Sort();

                string logstr = "";

                for (int i = 0; i < list.Count; i++)
                {
                    if (i%10 == 0)
                    {
                        logstr += "\n";
                    }

                    logstr += list[i] + " ";
                }

                Console.Write(logstr);
            }
        }

        public void ReadObject()
        {
            string doc = @"C:\Users\ganquan.zheng\Desktop\HSL pak\data";

            string[] files = Directory.GetFiles(doc, "*.OBS");

            List<string> headList = new List<string>();

            for (int i = 0; i < files.Length; i++)
            {
                string[] lines = File.ReadAllLines(files[i]);

                for (int j = 0; j < lines.Length; j++)
                {
                    if (lines[j].StartsWith("obj_"))
                    {
                        string[] splits = lines[j].Split('=');
                        string first = splits[0].Trim();
                        if (!headList.Contains(first))
                        {
                            headList.Add(first);
                        }
                    }
                }
            }

            headList.Sort();

            for (int i = 0; i < headList.Count; i++)
            {
                Console.WriteLine(headList[i]);
            }
        }

        public void ReadLanguage()
        {
            string file = @"C:\Users\ganquan.zheng\Desktop\HSL pak\data\RESOURCE.TXT";

            string[] lines = File.ReadAllLines(file, encodeBig5);

            Dictionary<string, string> colorMap = new Dictionary<string, string>();

            colorMap.Add("@0", "<color=#0000FF>"); // blue
            colorMap.Add("@1", "<color=#FFFFFF>"); // white
            colorMap.Add("@2", "<color=#FF0000>"); // red
            colorMap.Add("@3", "<color=#008000>"); // green
            colorMap.Add("@4", "<color=#800080>"); // purple
            colorMap.Add("@5", "<color=#FFFF00>"); // yellow
            colorMap.Add("@6", "<color=#FFA500>"); // orange
            colorMap.Add("@7", "<color=#87CEEB>"); // sky
            colorMap.Add("@8", "<color=#A52A2A>"); // brown
            colorMap.Add("@9", "<color=#FFC0CB>"); // pink

            Regex regex = new Regex("(@0)|(@1)|(@2)|(@3)|(@4)|(@5)|(@6)|(@7)|(@8)|(@9)");

            Dictionary<int, string> map = new Dictionary<int, string>();

            for (int i = 0; i < lines.Length; i++)
            {
                if (lines[i].StartsWith("item = "))
                {
                    string[] splits = lines[i].Split('=', ',');

                    int id;

                    if (int.TryParse(splits[1], out id) && id > 0)
                    {
                        StringBuilder sb = new StringBuilder(splits[2]);

                        Match match = regex.Match(sb.ToString());

                        bool first = true;

                        while (match.Success)
                        {
                            string result = match.Value;

                            if (colorMap.ContainsKey(result))
                            {
                                if (first)
                                {
                                    sb.Replace(result, colorMap[result], match.Index, match.Length);
                                }
                                else
                                {
                                    sb.Replace(result, "</color>" + colorMap[result], match.Index, match.Length);
                                }
                                first = false;
                            }
                            match = regex.Match(sb.ToString());
                        }
                        if (!first)
                        {
                            sb.Append("</color>");
                        }
                        map.Add(id, sb.ToString());
                    }
                }
            }

            string[] contents = new string[map.Count + 2];

            contents[0] = CSVFileUtil.ToCSVLine(new[] {"ID", "注释", "内容"});
            contents[1] = CSVFileUtil.ToCSVLine(new[] {"int", "", "Content"});

            int index = 2;

            foreach (var item in map)
            {
                contents[index] = CSVFileUtil.ToCSVLine(new[] {item.Key.ToString(), "", item.Value});
                index++;
            }

            File.WriteAllLines("d:/aaa.csv", contents, Encoding.UTF8);
        }

        public void ReadConfig()
        {
            ReadConfig("PLAYERS.TXT", "d:/character.csv", "[character]");
            ReadConfig("SPECIAL.TXT", "d:/special.csv", "[special]");
            ReadConfig("ANIMAL.TXT", "d:/animal.csv", "[animal]");
            ReadConfig("effects.txt", "d:/effect.csv", "[effect]");
            ReadConfig("ITEM.TXT", "d:/item.csv", "[item]");
            ReadConfig("MAGIC.TXT", "d:/magic.csv", "[magic]");
            ReadConfig("RANGE.TXT", "d:/range.csv", "[range]");
            ReadConfig("SHAPEDEF.TXT", "d:/shapedef.csv", "[define]");
            ReadConfig("TOWNDEF.TXT", "d:/towndef.csv", "[item]");
            ReadConfig("TOWNDEF.TXT", "d:/townevent.csv", "[town_event]");
            ReadConfig("TRACK.TXT", "d:/track.csv", "[track]");
        }

        private void ReadConfig(string configFile, string output, string flag)
        {
            string file = Path.Combine(@"C:\Users\ganquan.zheng\Desktop\HSL pak\data", configFile);

            Console.WriteLine("begin read : " + configFile);

            if (!File.Exists(file))
            {
                file = Path.Combine(@"C:\Users\ganquan.zheng\Desktop\HSL pak\data\obsolete", configFile);

                if (!File.Exists(file))
                {
                    Console.WriteLine("failed to read config: " + configFile);
                    return;
                }
            }

            string[] lines = File.ReadAllLines(file, encodeBig5);

            Dictionary<string, string> defineMap = new Dictionary<string, string>();

            Dictionary<string, int> properties = new Dictionary<string, int>();

            List<Dictionary<string, List<string>>> characters = new List<Dictionary<string, List<string>>>();

            for (int i = 0; i < lines.Length; i++)
            {
                if (lines[i].StartsWith("#include", StringComparison.OrdinalIgnoreCase))
                {
                    string[] splits = Regex.Split(lines[i].Trim(), @"\s+");
                    Dictionary<string, string> tempDefineMap = ReadHeadFile(splits[1]);
                    if (tempDefineMap != null)
                    {
                        foreach (var item in tempDefineMap)
                        {
                            //defineMap.Add(item.Key, item.Value);
                        }
                    }
                }
                else if (lines[i].Contains(flag))
                {
                    i++;
                    Dictionary<string, List<string>> character = new Dictionary<string, List<string>>();
                    Dictionary<string, int> tempPropertyRecord = new Dictionary<string, int>();
                    while (i < lines.Length)
                    {
                        if (!string.IsNullOrEmpty(lines[i]) &&
                            !InvalidatedLine(lines[i]) &&
                            lines[i].Contains('='))
                        {
                            // split by whitespaces
                            string[] splits = Regex.Split(lines[i].Trim(), @"\s+");
                            // record the max occurrences of a property
                            if (!tempPropertyRecord.ContainsKey(splits[0]))
                            {
                                tempPropertyRecord[splits[0]] = 1;
                            }
                            else
                            {
                                tempPropertyRecord[splits[0]] = tempPropertyRecord[splits[0]] + 1;
                            }
                            if (!properties.ContainsKey(splits[0]))
                            {
                                properties[splits[0]] = 0;
                            }
                            if (properties[splits[0]] < tempPropertyRecord[splits[0]])
                            {
                                properties[splits[0]] = tempPropertyRecord[splits[0]];
                            }
                            if (!character.ContainsKey(splits[0]))
                            {
                                character[splits[0]] = new List<string>();
                            }
                            // parse a line
                            if (splits.Length > 2)
                            {
                                string record = string.Empty;
                                // property = (propertyValue)
                                string propertyValue = splits[2];

                                for (int j = 3; j < splits.Length; j++)
                                {
                                    if (InvalidatedLine(splits[j]))
                                        break;
                                    propertyValue += splits[j];
                                }

                                if (propertyValue.Contains(","))
                                {
                                    string[] propertyValueSplits = propertyValue.Split(',');
                                    for (int j = 0; j < propertyValueSplits.Length; j++)
                                    {
                                        string key = propertyValueSplits[j];
                                        if (defineMap.ContainsKey(key))
                                        {
                                            key = defineMap[key];
                                        }
                                        if (!string.IsNullOrEmpty(record))
                                        {
                                            record += ",";
                                        }
                                        record += key;
                                    }
                                }
                                else
                                {
                                    if (!string.IsNullOrEmpty(record))
                                    {
                                        record += ",";
                                    }
                                    if (defineMap.ContainsKey(propertyValue))
                                    {
                                        record += defineMap[propertyValue];
                                    }
                                    else
                                    {
                                        record += propertyValue;
                                    }
                                }
                                if (!string.IsNullOrEmpty(record))
                                {
                                    character[splits[0]].Add(record);
                                }
                            }
                        }
                        i++;
                        if (i >= lines.Length ||
                            Regex.IsMatch(lines[i], "\\[\\S+\\]") // 使用 \S 的原因：一个文件里面的 flag 可能有多个
                            )
                        {
                            i--;
                            break;
                        }
                    }
                    characters.Add(character);
                }
            }

            string[] contents = new string[characters.Count + 3];
            contents[0] = "";
            int column = 0;
            foreach (var item in properties)
            {
                column += item.Value;
            }
            string[] content1array = new string[column];
            int index = 0;
            foreach (var item in properties)
            {
                if (item.Value > 1)
                {
                    for (int i = 0; i < item.Value; i++)
                    {
                        content1array[index] = item.Key + i;
                        index++;
                    }
                }
                else
                {
                    content1array[index] = item.Key;
                    index++;
                }
            }
            contents[1] = CSVFileUtil.ToCSVLine(content1array);
            contents[2] = "";

            for (int i = 0; i < characters.Count; i++)
            {
                string[] content_i_array = new string[column];
                int tempIndex = 0;
                foreach (var item in properties)
                {
                    if (characters[i].ContainsKey(item.Key))
                    {
                        List<string> content = characters[i][item.Key];

                        for (int j = 0; j < item.Value; j++)
                        {
                            if (j < content.Count)
                            {
                                content_i_array[tempIndex + j] = content[j];
                            }
                            else
                            {
                                content_i_array[tempIndex + j] = string.Empty;

                            }
                        }
                    }
                    tempIndex += item.Value;
                }
                contents[i + 3] = CSVFileUtil.ToCSVLine(content_i_array);
            }

            File.WriteAllLines(output, contents, Encoding.UTF8);

            Console.WriteLine("success read config: " + configFile);
        }

        private Dictionary<string, string> ReadHeadFile(string fileName)
        {
            fileName = Path.Combine(@"C:\Users\ganquan.zheng\Desktop\HSL pak\data\obsolete\head", fileName);
            if (File.Exists(fileName))
            {
                Dictionary<string, string> ret = new Dictionary<string, string>();

                string[] lines = File.ReadAllLines(fileName, encodeBig5);

                for (int i = 0; i < lines.Length; i++)
                {
                    if (lines[i].StartsWith("#define"))
                    {
                        string[] splits = Regex.Split(lines[i].Trim(), @"\s+");

                        if (splits[2].StartsWith("0x"))
                        {
                            
                        }

                        ret.Add(splits[1], splits[2]);
                    }
                }

                return ret;
            }
           
            Console.WriteLine("do not find head file: " + fileName);
            return null;
        }

        private bool InvalidatedLine(string str)
        {
            str = str.Trim();
            return str.StartsWith(";") || str.StartsWith("//");
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
