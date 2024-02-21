#include <stdio.h>

// slide error int line 8

int main(){
	int n1=10;
	printf("variable n1, adress: %u, value:%d\n",&n1,n1);
	int *n2 = n1;
	printf("variable n2, adress: %u, value:%d\n",&n2,n2);
	return 0;
}
