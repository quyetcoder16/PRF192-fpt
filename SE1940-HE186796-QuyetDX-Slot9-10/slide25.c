#include <stdio.h>

int isPrime(int n){
	int i;
	for(i=2;i*i<n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}

double average(int a,int b,int c){
	return (a+b+c)/3.0f;
}

int main(){
	int n;
	printf("input n = ");
	scanf("%d",&n);
	if(isPrime(n)) printf("n is prime!");
	else printf("n is not prime!");
	int a=1,b=5,c=7;
	printf("\n");
	printf("average = %lf",average(a,b,c));
	return 0;
}
