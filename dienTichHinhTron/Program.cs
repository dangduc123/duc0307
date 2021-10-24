/*Minh họa xử lý ngoại lệ*/
using System;

namespace dienTichHinhTron
{
    class Program
    {
        const double PI = 3.1416;
        static void Main(string[] args)
        {
            double r = 0, s = 0;
            do
            {
                Console.WriteLine("\nNhap vao ban kinh r:");
                try
                {
                    r = double.Parse(Console.ReadLine());
                }
                catch
                {
                    Console.WriteLine("\nVui long nhap gia tri so!");
                }
            } while (r <= 0);    
            
              s = r * r * PI;
              Console.WriteLine("\nDien tich hinh tron = {0}", s);
        }
    }
}
