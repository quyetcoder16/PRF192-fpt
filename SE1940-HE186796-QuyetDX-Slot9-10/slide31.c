#include <stdio.h>

int sumDivisors(int n){
	int i,s=0;
	for(i=1;i<=n/2;i++){
		if(n%i!=0) s+=i;
	}
	return s;
}

int main(){
	int n,sum;
	printf("\nInput a positive interger : ");
	scanf("%d",&n);
	sum = sumDivisors(n);
	printf("sum of divisors:%d\n",sum);
	return 0;
}
