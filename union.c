#include<stdio.h>

union data{
    int i;
    char c;
    double d;
};

int main(){
    union data a;
    a.i = 100;
    a.c = 'A';
    printf("len=%ld\n", sizeof(a));
    printf("i=%d\n", a.i);
    printf("c=%d\n", a.c);
    return 1;
}
