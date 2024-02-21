#include<stdio.h>
#include<math.h>

int prime(int);

int main(){
	int n,i;
	double sqrt;
	printf("enter n:");
	scanf("%d",&n);
	printf("prime numbers between %d and 2 are:", n);
	for(i=2; i<=n; i++) {
		if(prime(i)==1){
			 printf("%d\t", i);
		}
	}
	return 0;
} ;

int prime(int n){
	int m = sqrt(n); //m:sqare root of n
	int i;
	for(i=2;i<=m;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
