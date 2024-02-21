#include <stdio.h>

int main(){
	int i,j;
	int n,m;
	printf("enter the low enf of the range: ");
	scanf("%d",&n);
	printf("enter the hight enf of the range: ");
	scanf("%d",&m);
	for(i=n;i<=m;i++){
		for(j=n;j<=m;j++){
			printf("%d ",i*j);
		}
		printf("\n");
	}
	return 0;
}
