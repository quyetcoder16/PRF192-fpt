#include <stdio.h>

void swap(int *a,int *b){
	int tmp = *a;
	*a=*b;
	*b=tmp;
}

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("a = %d , b= %d",a,b);
	return 0;
}
