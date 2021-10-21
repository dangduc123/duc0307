#include<stdio.h>

int tinhTongChuSoLe(int n)
{
	int sum = 0;
	while(n>0)
	{
		if(n%2!=0)
			sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main()
{
	int n;
	printf("\nNhap n:");
	scanf("%d",&n);
	printf("\nTong chu so le trong ham la:%d",tinhTongChuSoLe(n));
}
	
			
		
