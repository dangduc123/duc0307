using System;

namespace PhanSo
{
    class Program
    {
        class phanSo
        {
            private int TuSo=0;
            private int MauSo=1;
            
            public int tuso
            {
                get { return TuSo; }
                set { TuSo = value; }
            }

            public int mauso
            {
                get { return MauSo; }
            }

            public void Nhap()
            {
                Console.WriteLine("\nNhap vao tu so:");
                TuSo = int.Parse(Console.ReadLine());
                do
                {
                    Console.WriteLine("\nNhap vao mau so:");
                    MauSo = int.Parse(Console.ReadLine());
                    if (MauSo == 0) Console.WriteLine("\nMau so khong hop le! Xin vui long nhap lai.");
                } while (MauSo == 0);
            }

            public void Xuat()
            {
                Console.WriteLine("{0}/{1}", TuSo, MauSo);
            }

            public int UCLN(int a,int b)
            {
                while (a != b)
                {
                    if (a > b)
                        a = a - b;
                    else
                        b = b - a;
                }
                return a;        
            }

            public phanSo ToiGian(phanSo p)
            {
                if (p.TuSo != 0)
                {
                    int u = UCLN(p.TuSo, p.MauSo);
                    p.TuSo /= u;
                    p.MauSo /= u;
                }
                return p;
            }   
        }
        static void Main(string[] args)
        {
            phanSo p = new phanSo();
            p.Nhap();
            Console.WriteLine("\nPhan so vua nhap la:");
            p.Xuat();
            Console.WriteLine("\nPhan so sau khi rut gon la:");
            p.ToiGian(p);
            p.Xuat();
            Console.ReadKey();
        }
    }
}
