#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int get_sum(int n){
    int sum = 0, i;
    for(i=0;i<=n;i++)
        sum += i; // sum = sum + i;
    return sum;
}

// char *retMemory(){
//     char p[] = "hello world";
//     return p;
// }

// char retArray(){
//     char p[] = "hello world";
//     return "ss";
// }

int findnumstring(char *outputstr, char *inputstr){
    char *in = inputstr;
    char *out = outputstr;
    char *temp, *final;
    int count = 0, maxlen = 0;

    while(*in != '\0'){
        if (*in > 47 && *in <58){
            for(temp = in; *in>47 && *in < 58; in++){
                count++;
            }
        }
        else {
            in++;
        }
        if (maxlen < count){
            maxlen = count;
            final =temp;
        }
        count = 0;
    }

    for(int i = 0; i<maxlen; i++){
        *out=*final;
        out++;
        final++;
    }
    *out = '\n';
    return maxlen;
}


int main(){
    // int i = 100, ret;
    // ret = get_sum(i);
    // printf("1+2+...+%d=%d\n", i, ret);

    //char a[10];
    //int len = strlen(a);
    //printf("len=%d\n", len);

    //char *str = NULL;
    //str = retMemory();
    //printf(str);

    // char aa[20];
    // aa = retArray();
    // printf("%s\n", retArray());
    char string[] = "abcd1234easda123asas123456789";
    char *p = (char *)malloc(strlen(string)+1);
    int count = findnumstring(p, string);
    printf("%s\n number string len = %d \n", p, count);
    return 0;
}
