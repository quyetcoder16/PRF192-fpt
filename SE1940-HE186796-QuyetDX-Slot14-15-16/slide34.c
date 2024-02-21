#include <stdio.h>

int main(){
	int n;
	char c;
	scanf("%d%*c%c",&n,&c);
	printf("%d, %c\n",n,c);
	return 0;
}
