#include<stdio.h>

#define GET_MAX 0
#define GET_MIN 1



int zhizhen(){
    int a = 100, b = 200;
    int *p1 = &a, *p2=&b;
    printf("p1=%d, p2=%d\n", *p1, *p2);
    printf("%x, %x\n", &a, &b);
    printf("%x, %x\n", p1, p2);
    return 1;
}

int zhizhensuzhu(){
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    int i, *p = NULL;
    for(i=0;i<10;i++)
        printf("a[%d]=%d", i, a[i]);

    for(i=0;i<10;i++)
        printf("a[%d]=%d", i, *(a+i));

    for(p=a;p<a+10;)
        printf("%d", *p++);

    return 1;
}

int erjizhizhen(){
    int a[5] = {1,3,5,7,9};
    int *p[5], i;
    int **pp = p;
    for(i=0;i<5;i++)
	p[i]=&a[i];
   
    for(i=0;i<5;i++)
	printf("%d ", *p[i]);

    for(i=0;i<5;i++,pp++)
	printf("%d ", **pp);

    return 1;
}

int main(){
    // zhizhen();
    // zhizhensuzhu();
    erjizhizhen();
    return 1;
}
