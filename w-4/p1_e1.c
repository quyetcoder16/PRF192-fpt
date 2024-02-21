//#include <stdio.h>
//
//int main(){
//	int n = 7,m=6;
//	int *pn = &n;
//	int *pm = &m;
//	*pn = *pm + 2*m - 3*n;
//	*pm -= *pn;
//	printf("%d",m+n);
//	return 0;
//}

//#include <stdio.h>
//
//int main(){
//	char c1 = 'A',c2 = 'F';
//	char* p1 = &c1;
//	char* p2 = &c2;
//	*p1 += 3;
//	*p2 -=5;
//	printf("%d",c1-c2);
//	return 0;
//}

#include <stdio.h>

int main(){
	double x = 3.2,y = 5.1;
	double* p1 = &x;
	double* p2 = &y;
	*p1 += 3-2*(*p2);
	*p2 -= 3*(*p1);
	printf("%lf",x+y);
	return 0;
}
