#include<stdio.h>

int main(){
	int n, n1 = 0;
	printf("Nhap vao n:");
	scanf("%d",&n);
	int tam = n;
	while(n > 0){
		int x = n % 10;
		n = n / 10;
		n1 = n1 * 10 + x;
	}//khi ra khoi vong while thi n se = 0 nen chung ta se gan cho n mot bien tam
	if(n1==tam)
	{
		printf("\n%d la so doi xung",tam);
	}
	else
	{
		printf("\n%d khong phai la so doi xung",tam);
	}
}

/*vd: n = 1234321 thi bay gio ta se chia lay phan nguyen sau khi chia xong thi
ta se * so dao voi 10 + x thi ta se duoc n % 10 thi duoc 1, sau do 1*10+2 = 12,
sau do lam tiep tuc voi cac so con lai thi ta se duoc so doi xung*/
