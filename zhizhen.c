#include<stdio.h>
#include<string.h>

#define GET_MAX 0
#define GET_MIN 1

//
int zhizhen(){
    int a = 100, b = 200;
    int *p1 = &a, *p2=&b;
    printf("p1=%d, p2=%d\n", *p1, *p2);
    // printf("%x, %x\n", &a, &b);
    // printf("%x, %x\n", p1, p2);
    return 1;
}

//
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

//
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

//指针函数部分
int get_max(int i, int j){
    return i>j?i:j;
}

int get_min(int i, int j){
    return i>j?j:i;
}

int compare(int i, int j, int flag){
    int ret;
    int (*p)(int,int);

    if(flag == GET_MAX){
        p = get_max;
    } else {
        p = get_min;
    }
    ret = p(i,j);
    return ret;
}

int get_big(int i, int j, int k, int (*p)(int, int)){
    int ret;
    ret = p(i,j);
    ret = p(ret, k);
    return ret;
}

// get_function先根()结合 ＝ get_function(int a):代表为一个整型参数的函数
// ＊get_function(int a):代表获取这个函数的地址
// (*)(int, int):代表指向这个函数的指针
int (*get_function(int a))(int, int){
    printf("the num is %d\n", a);
    return get_max;
}

int (*get())(int, int){
    return get_min;
}

// 字符串指针
int stringzhizhen(){
    char string[] = "Linux C";
    printf("%s\n", string);

    char *p = "Linux C";
    printf("%s\n", p);
    return 1;
}

int stringcopy(){
    char a[] = "Linux C Program", b[20], c[20];
    int i;

    for(i=0; *(a+i) != '\0'; i++){
        *(b+i)=*(a+i);
    }
    *(b+i) = '\0';

    char *p1, *p2;
    p1 = a;
    p2 = c;

    //不建议操作数组指针＋＋ －－ ＋n －n
    for(; *p1!='\0';p1++,p2++){
        *p2 = *p1;
    }
    *p2='\0';

    printf("%s\n",a);
    printf("%s\n",b);
    printf("%s\n",c);
    return 1;
}

int main(){
    // zhizhen();
    // zhizhensuzhu();
    // erjizhizhen();

    //
    // int i=5,j=10,k=15,ret;
    // ret=compare(i,j,GET_MAX);
    // ret = get_big(i, j, k, get_max);
    // printf("The Max is %d\n", ret);

    // int max;
    // int (*p)(int, int);
    // p = get_function(100);
    // p = get();
    // max = p(i,j);
    // printf("The Min is %d\n", max);

    //
    // stringzhizhen();
    stringcopy();
    char a[] = "Welcomr to ";
    char *p = "Linux C Program";
    puts(a);
    puts(p);
    char string[20];
    gets(string);
    puts(string);
    return 1;
}
