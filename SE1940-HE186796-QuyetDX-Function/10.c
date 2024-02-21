#include <stdio.h>

void solve(long long n){
	int max = 0,min =9;
	while(n>0){
		min  = (min>n%10)?(n%10):min;
		max = (max<n%10)?(n%10):max;
		n/=10;
	}
	printf("min : %d\n",min);
	printf("max : %d",max);
}

int main(){
	int a;
	do{
		printf("enter n : ");
		scanf("%d",&a);
	}while(a<0);
	
	solve(a);
	
	return 0;
}
