#include <stdio.h>

void add200(int n){
	n+=200;	
}

void add200Point(int *n){
	*n+=200;
}

void sum3(int* a,int *b,int *c,int *sum){
	*sum = *a + *b + *c;
}

void swap(int *a,int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int max3Number(int a,int b,int c){
	int max = a;
	max = (max<b) ?b:max;
	max = (max<c) ?c:max;
	return max;
}

int main(){
	int n=200;
	int *pI =&n;
	add200(n);
	printf("%d\n",n);
	add200Point(&n);
	printf("%d",n);
	int a=3,b=2,c=3,sum =1;
	sum3(&a,&b,&c,&sum);
//	printf("%d",sum);
	swap(&a,&b);
	printf("%d %d",a,b);
	printf("max  = %d",max3Number(1,2,3));
	return 0;
}
