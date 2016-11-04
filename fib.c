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

// A: B=1 || A=3
// B: B=2 || E=4
// C: C=1 || D=2
// D: C=5 || D=3
// E: E=4 || A=1
int main(){
    int a = 1, b = 1, c = 1, d = 1, e = 1;
    for(a=1; a<=5; a++){
        for(b=1; b<=5; b++){
            for(c=1; c<=5; c++){
                for(d=1; d<=5; d++){
                    for(e=1; e<=5; e++){
                        if((b==1)+(a==3)==1 && (b==2)+(e==4)==1 && (c==1)+(d==2)==1 && (c==5)+(d==3)==1 && (e==4)+(a==1)==1)
                            //if ((b==1)+(a==3)==1&&(b==2)+(e==4)==1&&(c==1)+(d==2)==1&&(c==5)+(d==3)==1&&(e==4)+(a==1)==1)
                        {
                            printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
                            break;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

// int main()
// {
//     int n, f, s;
//     // printf("input n:");
//     // scanf("%d", &n);
//     n = 10;
//     f = fib(n);
//     printf("f=%d\n", f);
//     // max
//     s = MAX(n, f);
//     printf("s=%d\n", s);

//     show_int_type();

//     int_2_char();

//     int a = 3, b = 4, c = 5;
//     // printf("%s", a+b > c && b == c);
//     // a||b&&b-c;
//     // !(a>b)&&!c||1;

//     sort_ts();
//     return 0;
// }
