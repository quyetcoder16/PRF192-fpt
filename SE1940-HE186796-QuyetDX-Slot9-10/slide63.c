#include <stdio.h>

int isPower2(int n){
	return (n&(n-1))==0;
}

int main(){
	int n;
	do{
		printf("enter n :");
		scanf("%d",&n);
	}while(n<=0);
	if(isPower2(n)) printf("it is power of 2\n");
	else printf("it is not power of 2\n");
	return 0;
}
