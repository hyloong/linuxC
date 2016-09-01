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

//
void show_int_type(){
    int i;
    short int si;
    long int li;
    int a, b, c;
    a = sizeof(i);
    b = sizeof(si);
    c = sizeof(li);
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    printf("c=%d\n", c);
}

void int_2_char(){
    int c1, c2;
    char c3;
    c1 = 'a'-'A';
    c2 = 'b'-'B';
    c3 = 'c'-32;
    printf("c1 is %d and c2 is %d \n", c1, c2);
    printf("c1 is %d and c3 is %c \n", c3, c3);
}

int main()
{
    int n, f, s;
    printf("input n:");
    scanf("%d", &n);
    f = fib(n);
    printf("f=%d\n", f);
    // max
    s = MAX(n, f);
    printf("s=%d\n", s);

    show_int_type();

    int_2_char();
    return 0;
}


adasd
dddddydddyxdddyxdddyxdddyxdddyxdddyxdddyxdddyxdddyxdddyxdddyxdddyxdddyxdddydddyxdddyxdddyxdddyxdddyxdddyxdddyxdddyxdddyxdddyxdddyxdddyxxxdddyx

ddyxyx
ddyxyx
ddyxyx
ddyxyx

ddyxyx
dyx
dyx

dyx:



ddasdasdasd asdasd aas

asdas



