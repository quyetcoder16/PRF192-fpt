#include <stdio.h>

long long gcd(long long a,long long b){
	while(b!=0){
		long long tmp = b;
		b = a%b;
		a = tmp;
	}
	return a;
}

long long lcm(long long a,long long b){
	return a*b/gcd(a,b);
}

int main(){
	long long a,b;
	scanf("%lld %lld",&a,&b);
	printf("gcd = %lld \n",gcd(a,b));
	printf("lcm = %lld",lcm(a,b));	
	return 0;
}
