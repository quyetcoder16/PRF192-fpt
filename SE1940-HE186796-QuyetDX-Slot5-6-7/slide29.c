#include <stdio.h>

int main(){
	int s = 0;
	int n;
	do{
		scanf("%d",&n);
		s+=n;
	}while(n!=0);
	printf("s = %d",s);
	return 0;
}
