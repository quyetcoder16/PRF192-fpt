#include <stdio.h>

void printDivisors(int n){
	int i;
	for(i=1;i<=n/2;i++)
		if(n%i==0) printf("%d, ", i);
}

int main(){
	int n,i;
	printf("\nInput n = ");
	scanf("%d",&n);
	printDivisors(n);
	printf("\nInput n = ");
	scanf("%d",&n);
	printDivisors(n);
	printf("\nInput n = ");
	scanf("%d",&n);
	printDivisors(n);
	return 0;
}
