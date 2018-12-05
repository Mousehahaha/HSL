using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Unpack
{
    class Program
    {
        static void Main(string[] args)
        {
            Unpacker unpacker = new Unpacker(@"E:\Dirties\HSL\Resource\", @"E:\Dirties\HSL\Output\");
            //unpacker.DoUnpack();
            //unpacker.SeperateMoviePak();
            //unpacker.Shp2Bmp();
            //unpacker.BuildPNG(null);
            //unpacker.Seperate();
            //unpacker.ReadDefine();
            //unpacker.ReadUI();
            //unpacker.ReadMapDetail();
            //unpacker.ReadObject();
            //unpacker.ReadLanguage();
            unpacker.ReadConfig();

            //new Counter().DoCount();
            //new Counter().DoCount2(@"E:\Dirties\HSL\Resource\hsl.pak");

            //Exporter.ExportWAV();
        }
    }
}
