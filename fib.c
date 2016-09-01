#include<stdio.h>
#define MAX(A,B) A<B?A:B

int fib(int n)
{
    if (n < 1)
        return 1;
    if (n == 1 || n == 2)
        return 1;
    return fib(n-1)+fib(n-2);
}

int main()
{
    int n, f, s;
    printf("input n:");
    scanf("%d", &n);
    f = fib(n);
    printf("f=%d\n", f);
    s = MAX(n, f);
    printf("s=%d\n", s);
    return 0;
}
