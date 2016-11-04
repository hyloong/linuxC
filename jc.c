#include<stdio.h>

float jc1(int n){
	int i;
	float f = 1;
	for(i = 1; i <= n; i++)
		f = f*i;
	printf("n! = %10.0f\n", f);
	return f;
}

float jc2(int n){
	float f;
	if (n<0){
		printf("n error\n");
		return -1;
	}
	else if (n==0 || n==1)
		f = 1;
	else 
		f = n*jc2(n-1);
	return f;
}

int main(){
	int n = 10;
	float f, g;
	f = jc1(n);
	g = jc2(n);
	printf("n!= %10.0f\n", f);
	printf("n!= %10.0f\n", g);
}
