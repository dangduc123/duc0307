#include<stdio.h>

int fibonaci(int n)
{
	int f0 = 0;
	int f1 = 1;
	int fn = 1;
	if(n >= 2)
	{
		for(int i =2;i<=n;i++)
		{
			f0 = f1;
			f1 = fn;
			fn = f0 + f1;
		}
	}
	return fn;
}

int main()
{
	int n;
	printf("\nNhap vao so trong day Fibonacci:");
	scanf("%d",&n);
	for(int i = 0;i < n; i++)
	{
		printf("\t%d",fibonaci(i));
	}
}


//in ra day fibonacci bang de quy

//#include<stdio.h>
//
//int fibonacci(int n)
//{
//	if(n < 0)
//	{
//		return 0;
//	}
//	else if(n==0||n==1)
//	{
//		return n;
//	}
//	else 
//	{
//		return fibonacci(n-1)+fibonacci(n-2);
//	}
//}
//
//int main()
//{
//	int n;
//	printf("\nNhap vao so trong day Fibonacci:");
//	scanf("%d",&n);
//	for(int i = 0;i <= n; i++)
//	{
//		printf("\t%d",fibonacci(i));
//	}
//}

/* Fibonacci la mot day so vo han, duoc bat dau boi so 0 va so 1, cac
so tiep theo luon bang tong cua 2 so lien truoc cong lai vd: 0 1 1 2 3 5*/

