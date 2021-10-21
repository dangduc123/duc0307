#include<stdio.h>
#include<math.h>

int ktSNT(int n)
{
	if(n<2)
	{
		return false;
	}
	for(int i = 2;i<=(int)sqrt(n);i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}

int tinhTongCacChuSoNT(int n)
{
	int sum = 0;
	int n1;
	while(n>0){
		n1 = n%10;
		if(ktSNT(n1))
			sum += n1;
			n /= 10;
	}
	return sum;
}

int main()
{
	int n;
	printf("\nNhap n:");
	scanf("%d",&n);
	printf("\nTong cac chu so nguyen to la:%d",tinhTongCacChuSoNT(n));
}
