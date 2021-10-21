#include<stdio.h>
//Ten: Dang Duc
//MSSV:62132967
int main()
{
	float a,b;
	char ch;
	printf("\nNhap vao ky tu cua ch:");
	scanf("%c",&ch);
	printf("\nNhap vao so a:");
	scanf("%f",&a);
	printf("\nNhap vao so b:");
	scanf("%f",&b);
	if(ch == '+')
	{
		printf("%.2f+%.2f=%.2f",a,b,a+b);
	}
	else if(ch == '-')
	{
		printf("%.2f-%.2f=%.2f",a,b,a-b);
	}
	else if(ch == '*')
	{
		printf("%.2f*%.2f=%.2f",a,b,a*b);
	}
	else if(ch == '/')
	{
		printf("%.2f/%.2f=%.2f",a,b,a/b);
	}
}
	
	
