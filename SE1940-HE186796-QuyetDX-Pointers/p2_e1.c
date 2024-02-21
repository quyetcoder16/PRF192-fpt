#include <stdio.h>
#include <math.h>

int isPrime(long long n){
	if(n<2) return 0;
	long long i = 2;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

void minMaxDigit(long long n){
	n = abs(n);
	int min = n%10,max = n%10;
	while(n>0){
		min = (n%10<min)?n%10:min;
		max = (n%10>max)?n%10:max;
		n/=10;
	}
	printf("min digits = %d\n",min);
	printf("max digits = %d\n",max);
}

void printMenu(){
	printf("===========================\n");
	printf("1-process primes \n");
	printf("2-printf max min digit \n");
	printf("3-quits\n");
}

int main(){
	int c = 3;
	long long n;
	do{
		printMenu();
		scanf("%d",&c);
		switch(c){
			case 1:{
				printf("enter n =");
				scanf("%lld",&n);
				if(isPrime(n)){
					printf("%d is prime!\n",n);
				}else printf("%d is not prime!\n",n);
				break;
			}
			case 2:{
				printf("enter n =");
				scanf("%lld",&n);
				minMaxDigit(n);
				break;
			}
			default:{
				printf("error input!\n");
				break;
			}
		}
	}while(c!=3);
	return 0;
}
