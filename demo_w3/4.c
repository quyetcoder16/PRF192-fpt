#include <stdio.h>

long long factorial(long long n){
	long long res = 1;
	long long i = 0;
	for(i=1;i<=n;i++) res*=i;
	return res;
}

int main(){
	long long n;
	scanf("%lld",&n);
	printf("%lld",factorial(n));
	return 0;
}
