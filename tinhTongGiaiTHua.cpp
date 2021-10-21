#include<stdio.h>
int gthua(int n)
{
    int sum=0;
    int gt=1;
    for (int i=1;i<n+1;i++)
    {
      gt*=i;
      sum+=gt;
    }
    return sum;
} 

int main()
{
	int n;
	printf("\nNhap n:");
	scanf("%d",&n);
	printf("\nin ra giai thua la:%d",gthua(n));
}
