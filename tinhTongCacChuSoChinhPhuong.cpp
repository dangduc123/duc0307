#include<stdio.h>
#include<math.h>

int ktSoCP(int n)
{
	float t;
	t = sqrt(n);
	if(int(t)*int(t)==n)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int tongChuSoCP(int n)
{
	int sum = 0;
	int socuoicung;
	while(n > 0)
	{
		socuoicung = n%10;
		if(ktSoCP(socuoicung)==true)
			sum += socuoicung;
			n = n / 10;
	}
	return sum;
}

int main()
{
	int n;
	printf("\nNhap vao so nguyen duong n:");
	scanf("%d",&n);
	printf("\nTong cac chu so chinh phuong la:%d",tongChuSoCP(n));
}
	
