#include <stdio.h>
#include "myfunction.c"

int main(){
	int n;
	printf("input n = ");
	scanf("%d",&n);
	if(isPrime(n)) printf("n is prime!");
	else printf("n is not prime!");
	return 0;
}
