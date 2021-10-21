#include <stdio.h>

int Fibonacci(int n)
{
    if (n == 1 || n == 2)
        return true;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main()
{
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    printf("So Fibonacci thu %d la: %d", n, Fibonacci(n));
    return 0;
}

/* Fibonacci la mot day so vo han, duoc bat dau boi so 0 va so 1, cac
so tiep theo luon bang tong cua 2 so lien truoc cong lai vd: 0 1 1 2 3 5*/
