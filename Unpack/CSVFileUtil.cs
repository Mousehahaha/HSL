using System.Collections.Generic;
using System.IO;
using System.Text;

namespace Unpack
{
    public class CSVFileUtil
    {
        //// CSV文件编码    
        public static Encoding ENCODE = Encoding.GetEncoding("GB2312");

        public static List<string[]> ReadFile(string _path)
        {
            using (FileStream fs = new FileStream(_path, FileMode.Open, FileAccess.Read))
            {
                StreamReader sr = new StreamReader(fs, ENCODE);

                string line;

                List<string[]> ret = new List<string[]>();

                while ((line = ReadLine(sr)) != null)
                {
                    ret.Add(FromCSVLine(line));
                }

                return ret;
            }
        }

        public static void SaveFile(string _path, List<string[]> _contents)
        {
            if (File.Exists(_path))
                File.Delete(_path);

            string[] lines = new string[_contents.Count];

            for (int i = 0; i < _contents.Count; i++)
            {
                lines[i] = ToCSVLine(_contents[i]);
            }

            File.WriteAllLines(_path, lines, ENCODE);
        }

        // ==========以下是公开方法=============================    

        /// <summary>
        /// 从CSV文件流中读取一个CSV行。  
        /// </summary>
        /// <returns></returns>
        public static string ReadLine(TextReader _tr)
        {
            StringBuilder sb = new StringBuilder();

            bool bReadNext = true;

            while (bReadNext)
            {
                if (sb.Length > 0)
                {
                    sb.Append("\r\n");
                }

                // 一行    
                string strReadLine = _tr.ReadLine();

                // readLine is Null    
                if (strReadLine == null)
                {
                    return null;
                }
                sb.Append(strReadLine);

                // 如果双引号是奇数的时候继续读取。考虑有换行的是情况。    
                bReadNext = CountChar(sb.ToString(), '"', 0) % 2 == 1;
            }

            return sb.ToString();
        }

        /// <summary>
        /// 把CSV文件的一行转换成字符串数组。指定数组长度，不够长度的部分设置为null
        /// </summary>
        /// <param name="_source"></param>
        /// <returns></returns>
        public static string[] FromCSVLine(string _source)
        {
            return FromCSVLineToArray(_source).ToArray();
        }

        /// <summary>
        /// 把CSV文件的一行转换成字符串数组。不指定数组长度
        /// </summary>
        /// <param name="_source"></param>
        /// <returns></returns>
        public static List<string> FromCSVLineToArray(string _source)
        {
            if (string.IsNullOrEmpty(_source))
            {
                return new List<string>();
            }
            int currentPosition = 0;
            int maxPosition = _source.Length;
            int nextComma = 0;
            List<string> ret = new List<string>();
            while (currentPosition < maxPosition)
            {
                nextComma = NextComma(_source, currentPosition);
                ret.Add(NextToken(_source, currentPosition, nextComma).Trim());
                currentPosition = nextComma + 1;
                if (currentPosition == maxPosition)
                {
                    ret.Add("");
                }
            }
            return ret;
        }

        /// <summary>
        /// 把字符串类型的数组转换成一个CSV行。（输出CSV文件的时候用）
        /// </summary>
        /// <param name="_strArray"></param>
        /// <returns></returns>
        public static string ToCSVLine(string[] _strArray)
        {
            if (_strArray == null)
            {
                return "";
            }
            StringBuilder sb = new StringBuilder();
            for (int idx = 0; idx < _strArray.Length; idx++)
            {
                string item = AddQuote(_strArray[idx]);
                sb.Append(item);
                if (_strArray.Length - 1 != idx)
                {
                    sb.Append(',');
                }
            }
            return sb.ToString();
        }

        /// <summary>
        /// 字符串类型的List转换成一个CSV行。（输出CSV文件的时候用）  
        /// </summary>  
        public static string ToCSVLine(List<string> _strLsit)
        {
            if (_strLsit == null)
            {
                return "";
            }
            string[] strArray = new string[_strLsit.Count];
            for (int idx = 0; idx < _strLsit.Count; idx++)
            {
                strArray[idx] = _strLsit[idx];
            }
            return ToCSVLine(strArray);
        }

        // ==========以下是内部使用的方法=============================    

        /// <summary>
        /// 计算指定文字的个数
        /// </summary>
        /// <param name="str">文字列</param>
        /// <param name="c">文字</param>
        /// <param name="start">开始位置</param>
        /// <returns>个数</returns>
        private static int CountChar(string str, char c, int start)
        {
            int i = 0;
            int index = str.IndexOf(c, start);
            return index == -1 ? i : CountChar(str, c, index + 1) + 1;
        }

        /// <summary>
        /// 查询下一个逗号的位置
        /// </summary>
        /// <param name="_source">文字列</param>
        /// <param name="_current">检索开始位置</param>
        /// <returns>下一个逗号的位置</returns>
        private static int NextComma(string _source, int _current)
        {
            int maxPosition = _source.Length;
            bool inquote = false;
            while (_current < maxPosition)
            {
                char ch = _source[_current];
                if (!inquote && ch == ',')
                {
                    break;
                }
                if ('"' == ch)
                {
                    inquote = !inquote;
                }
                _current++;
            }
            return _current;
        }

        /// <summary>
        /// 取得下一个字符串
        /// </summary>
        /// <param name="source"></param>
        /// <param name="st"></param>
        /// <param name="nextComma"></param>
        /// <returns></returns>
        private static string NextToken(string source, int st, int nextComma)
        {
            StringBuilder sb = new StringBuilder();
            int next = st;
            while (next < nextComma)
            {
                char ch = source[next++];
                if (ch == '"')
                {
                    if (st + 1 < next &&
                        next < nextComma &&
                        source[next] == '"'
                        )
                    {
                        sb.Append(ch);
                        next++;
                    }
                }
                else
                {
                    sb.Append(ch);
                }
            }
            return sb.ToString();
        }

        /// <summary>
        /// 在字符串的外侧加双引号。如果该字符串的内部有双引号的话，把"转换成""
        /// </summary>
        /// <param name="item">字符串</param>
        /// <returns>处理过的字符串</returns>
        private static string AddQuote(string item)
        {
            if (string.IsNullOrEmpty(item))
            {
                return "";
            }

            // 将数字显示转换为文本显示，免得后面数字丢失
            item = '\t' + item;

            return "\"" + item + "\"";
        }
    }
}
