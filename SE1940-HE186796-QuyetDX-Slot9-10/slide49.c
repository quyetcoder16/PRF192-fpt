#include <stdio.h>

int isPrime(int n){
	int i;
	for(i=2;i*i<n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}

void print_n_Primes(int n){
	int count = 0;
	int value = 2;
	while(count<n){
		if(isPrime(value)) {
			printf("%d ",value);
			count++;
		}
		value++;
	}
}

int main(){
	int n;
	printf("Input number of primes:");
	scanf("%d",&n);
	print_n_Primes(n);
}
