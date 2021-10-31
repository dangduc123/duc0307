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


        class mangPhanSo
        {
            phanSo[] a;
            int n;

            public mangPhanSo()//hàm khởi tạo
            {
                a = new phanSo[100];
            }


            public void NhapMang()
            {
                Console.WriteLine("\nNhap vao so luong phan so:");
                n = int.Parse(Console.ReadLine());
                for(int i = 0;i < n;i++)
                {
                    Console.WriteLine("\nNhap vao phan so thu {0}", i + 1);
                    a[i] = new phanSo();
                    a[i].Nhap();
                }    
            }

            public void XuatMang()
            {
                for (int i = 0; i < n; i++)
                    a[i].Xuat();
            }

            public void PhanSoToiGian()
            {
                for(int i = 0;i<n;i++)
                {
                    a[i].ToiGian(a[i]);
                }    
            }

        }
        static void Main(string[] args)
        {
            mangPhanSo p = new mangPhanSo();
            p.NhapMang();
            Console.WriteLine("\nPhan so vua nhap la:");
            p.XuatMang();
            Console.WriteLine("\nPhan so sau khi rut gon la:");
            p.PhanSoToiGian();
            p.XuatMang();
            Console.ReadKey();
        }
    }
}
