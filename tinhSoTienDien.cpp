//viet chuong trinh tinh tien dien phai tra dua vao so kWh tieu thu
//Ten: Dang Duc
//MSSV:62132967
#include<stdio.h>

int main()
{
	float dienTieuThu, tienDien;
	int soTien1 = 2000, soTien2 = 2500, soTien3 = 3000;
	printf("\nNhap vao so dien tieu thu(kWh):");
	scanf("%f",&dienTieuThu);
	if(dienTieuThu < 0)
	{
		printf("\nXin moi ban nhap lai!");
	}
	else if(dienTieuThu <= 100)
	{
		tienDien = dienTieuThu * soTien1;
		printf("\nTien dien dung 100kWh la:%.0f d",tienDien);
	}
	else if(dienTieuThu <= 150)
	{
		tienDien = 100*soTien1 + ((dienTieuThu - 100)*soTien2);
		printf("\nTien dien dung 101 - 150 kWh la:%.0f d",tienDien);
	}
	else if(dienTieuThu > 150)
	{
		tienDien = 100*soTien1 + (100*soTien2)+((dienTieuThu - 200)*soTien3);
		printf("\nTien dien dung tu 150kWh tro len la:%.0f d",tienDien);
	}
}
	

