using System;
/*Viết chương trình tính tiền điện phải trả dựa vào số kWh tiêu thụ và bảng giá.

Bảng giá:
Số kWh <= 100: 2000 đ/kWh
Từ kWh thứ 101 đến 150: 2500 đ/kWh
Từ kWh thứ 151 trở đi 3000 đ/kWh*/

namespace tinhTienDien
{
    class Program
    {
        static void Main(string[] args)
        {
            float dienTieuThu, tienDien;
            int soTien1 = 2000, soTien2 = 2500, soTien3 = 3000;

            Console.WriteLine("\nNhap vao so dien tieu thu:");
            dienTieuThu = float.Parse(Console.ReadLine());
            if(dienTieuThu < 0)
            {
                Console.WriteLine("\nMoi ban nhap so lon hon 0!");
            }    
            else if(dienTieuThu <= 100)
            {
                tienDien = dienTieuThu * soTien1;
                Console.WriteLine("\nSo tien dien tieu thu <= 100 la:{0}", tienDien);
            }    
            else if(dienTieuThu <= 150)
            {
                tienDien = 100 * soTien1 + ((dienTieuThu - 100) * soTien2);
                Console.WriteLine("\nSo tien dien tieu thu tu 101 - 150 la:{0}", tienDien);
            }    
            else
            {
                tienDien = 100 * soTien1 + (100 * soTien2) + ((dienTieuThu - 200) * soTien3);
                Console.WriteLine("\nSo tien dien tieu thu tu 150 tro len:{0}", tienDien);
            }
            Console.ReadKey();
        }
    }
}
