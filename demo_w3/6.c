#include <stdio.h>

int isFibo(long long n){
	if(n==1) return 1;
	long long tmp1 = 1,tmp2 = 1,res = 1;
	while(res<n){
		res = tmp1+tmp2;
		tmp1 = tmp2;
		tmp2 = res;
	};
	return res==n;
}

int main(){
	long long n;
	scanf("%lld",&n);
	if(isFibo(n)) printf("yes");
	else printf("no");
	return 0;
}
