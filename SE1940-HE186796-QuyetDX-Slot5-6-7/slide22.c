#include <stdio.h>

int main(){
	long long s = 1;
	int i=1;
	for(i=1;i<=100;i++){
		s*=i;
//		printf("%ld ",s);
	}
	printf("S= %lld",s);
//	tran so
	return 0;
}
