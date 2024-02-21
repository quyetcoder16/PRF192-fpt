#include <stdio.h>

int main(){
	long long s = 0,tmp;
	do{
		printf("enter x :");
		scanf("%lld",&tmp);
		s+=tmp;
	}while(tmp!=0);
	printf("sum = %lld",s);
	return 0;
}
