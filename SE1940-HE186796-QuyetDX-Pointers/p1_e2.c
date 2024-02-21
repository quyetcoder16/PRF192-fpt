//#include <stdio.h>
//
//int main(){
//	int n = 7, m = 8;
//	int *p1 = &n,*p2=&m;
//	*p1+=12-m+(*p2);
//	*p2 = m+n-2*(*p1);
//	printf("%d",m+n);
//	return 0;
//}

//#include <stdio.h>
//
//int main(){
//	int n = 7, m = 8;
//	int *p1 = &n,*p2=&m;
//	*p1+=12-m+(*p2);
//	*p2 = m+n-2*(*p1);
//	printf("%d",m+n);
//	return 0;
//}

#include <stdio.h>

int main(){
	int n = 260,*p=&n;
	printf("n=%d\n",n);
	printf("%d\n",&p);
	printf("%d\n",(char*)p);
	char *pp =(char*)p;
	*pp = 0;
	printf("n=%d\n",n);
	return 0;
}
