#include <stdio.h>

int sumDivisors(int n){
	int i,s=0;
	for(i=1;i<=n/2;i++){
		if(n%i==0) s+=i;
	}
	return s;
}

int main(){
	
	printf("sum of divisors:%d\n",sumDivisors(15.7));
	return 0;
}
