namespace Unpack
{
    class Color
    {
        public int r;
        public int g;
        public int b;
        public int a;

        public bool IsEmpty()
        {
            return r == 0 && g == 0 && b == 0 && a == 0;
        }

        public override string ToString()
        {
            return r.ToString("X2") + " " + g.ToString("X2") + " " + b.ToString("X2") + " " + a.ToString("X2");
        }

        public override bool Equals(object obj)
        {
            Color other = obj as Color;

            if (other != null)
            {
                return other.r == this.r &&
                       other.g == this.g &&
                       other.b == this.b &&
                       other.a == this.a;
            }
            return false;
        }

        protected bool Equals(Color other)
        {
            return r == other.r && g == other.g && b == other.b && a == other.a;
        }

        public override int GetHashCode()
        {
            unchecked
            {
                var hashCode = r;
                hashCode = (hashCode*397) ^ g;
                hashCode = (hashCode*397) ^ b;
                hashCode = (hashCode*397) ^ a;
                return hashCode;
            }
        }
    }
}
