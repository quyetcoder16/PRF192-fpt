#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int i;
	for(i=1;i<=10;i++){
		printf("%dx%2d=%2d\n",n,i,n*i);
	}
	return 0;
}
