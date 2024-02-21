#include <stdio.h>

int main(){
	int n = 7;
	int *pn = &n;
	int **ppn = &pn;
	printf("variable n : addr : %u,value:%d\n",&n,n);
	printf("variable pn : addr : %u,value:%d\n",&pn,pn);
	printf("variable ppn : addr : %u,value:%d\n",&ppn,ppn);
	return 0;
}
