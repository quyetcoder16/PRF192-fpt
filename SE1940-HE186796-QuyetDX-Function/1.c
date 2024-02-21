#include <stdio.h>
#include <math.h>


int prime(int n){
	if(n<2) return 0;
	int i = 0;
	for(i=2;i<sqrt(n);i++){
		if(n%i==0) return 0;		
	}
	
	return 1;
}


int main(){
	
	int n;
	do{
		printf("n = ");
		scanf("%d",&n);
		int i = 0;
		for(i=2;i<=n;i++){
			if(prime(i)) printf("%d ;",i);
		}
	}while(n<2);
	
	
	return 0;
}
