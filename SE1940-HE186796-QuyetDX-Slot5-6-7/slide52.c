#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int i =0,j=0;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
