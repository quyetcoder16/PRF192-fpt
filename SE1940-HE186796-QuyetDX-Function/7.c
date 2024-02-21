#include <stdio.h>

int sumDigits(long long n){
	long res = 0;
	while(n>0){
		res+=(n%10);
		n/=10;
	}
	return res;
}

int main(){
	long long n;
	do{
		printf("enter n :");
		scanf("%lld",&n);
		if(n>=0)printf("sum digit = %lld\n",sumDigits(n));	
	}while(n>=0);
	
	return 0;
}
