using System.IO;
using System.Text;

namespace Unpack
{
    class FileReader
    {
        private static Encoding encodeBig5 = Encoding.GetEncoding("BIG5");
        private static Encoding encodeAscII = Encoding.ASCII;

        private FileStream fs;
        private BinaryReader br;
        private long pos;

        public FileReader(FileStream fs)
        {
            this.fs = fs;
            br = new BinaryReader(fs);
            
            pos = 0;
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

        #region read methods

        public byte[] ReadBytes(int cnt)
        {
            this.pos += cnt;
            return br.ReadBytes(cnt);
        }

        public byte ReadByte()
        {
            this.pos++;
            return br.ReadByte();
        }

        public long ReadInt64()
        {
            byte[] bytes = ReadBytes(4);

            return bytes[0] | bytes[1] << 8 | bytes[2] << 16 | bytes[3] << 24;
        }

        public long ReadInt64Complement()
        {
            long value = ReadInt64();
            return - value;
        }

        public int ReadInt8()
        {
            return ReadByte();
        }

        public char ReadChar()
        {
            char ret = br.ReadChar();
            this.pos++;
            return ret;
        }

        public string ReadString(int cnt)
        {
            byte[] bytes = ReadBytes(cnt);
            return Bytes2StringEncodeBig5(bytes);
        }

        public Color ReadColor()
        {
            Color ret = new Color();
            ret.r = ReadInt8();
            ret.g = ReadInt8();
            ret.b = ReadInt8();
            ret.a = ReadInt8();
            return ret;
        }

        public string GetPos()
        {
            return this.pos.ToString("X") + " l: " + this.pos / 16;
        }

        public void Seek(long offset)
        {
            fs.Seek(offset, SeekOrigin.Current);
            pos += offset;
        }

        #endregion
    }
}
