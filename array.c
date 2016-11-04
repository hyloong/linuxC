#include<stdio.h>

int main(){
    int array1[2][4]={{1,2,3,4},{5,6,7,8}};

    int array2[4][2];
    int a, b;

    for(a=0; a<2; a++){
        for(b=0;b<4;b++){
            array2[b][a]=array1[a][b];
            // printf("array2[%d][%d]:%d\n", b, a, array2[b][a]);
            printf("%5d",array2[b][a]);
        }
        printf("\n");
    }

    for(a=0; a<4; a++){
        for(b=0;b<2;b++){
            // array2[b][a]=array1[a][b];
            // printf("array2[%d][%d]:%d\n", b, a, array2[b][a]);
            printf("%5d",array2[a][b]);
        }
        printf("\n");
    }

    return 1;
}
