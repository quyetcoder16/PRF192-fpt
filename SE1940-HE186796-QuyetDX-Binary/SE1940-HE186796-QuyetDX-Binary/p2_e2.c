#include <stdio.h>

int n;
double x;
char c1;

int main(){
	int m;
	short s;
	long l;
	float y;
	printf("Code of main:%u\n",&main);
	printf("variable n, add:%u, memory size:%d\n",&n,sizeof(n));
	printf("variable x, add:%u, memory size:%d\n",&x,sizeof(x));
  	printf("variable c1, add:%u, memory size:%d\n",&c1,sizeof(c1));
  	printf("variable m, add:%u, memory size:%d\n",&m,sizeof(m));
  	printf("variable s, add:%u, memory size:%d\n",&s,sizeof(s));
  	printf("variable l, add:%u, memory size:%d\n",&l,sizeof(l));
  	printf("variable y, add:%u, memory size:%d\n",&y,sizeof(y));
	return 0;
}

