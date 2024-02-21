#include <stdio.h>

void T (int * p, int*q)
{  
 int t= *p; *p=*q; *q=t;
}


int main(){
	int a=7,b=6;
	T(&a,&b);
	printf("%d , %d",a,b);
	return 0;
}
