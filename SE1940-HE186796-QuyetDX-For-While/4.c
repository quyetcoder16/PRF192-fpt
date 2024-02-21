#include <stdio.h>

void swap(int *a,int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}

int main(){
	int a,b;
	do{
		printf("enter x ,y :");
		scanf("%d %d",&a,&b);
		swap(&a,&b);
		printf("x = %d\n",a);
		printf("y = %d\n",b);
	}while(a!=0&&b!=0);
	return 0;
}
