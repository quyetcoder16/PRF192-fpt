#include <stdio.h>

long long fibo(long long n){
	long long res = 1;
	long long tmp1 =1,tmp2 = 1;
	if(n<2) return 1;
	long long i =0;
	for(i=2;i<n;i++){
		res = tmp1+tmp2;
		tmp2 = tmp1;
		tmp1 = res;
	}
	return res;
}

int main(){
	long long n = 0;
	do{
		printf("enter n : ");
		scanf("%lld",&n);
	}while(n<1);
	printf("%lld",fibo(n));
	return 0;
}
