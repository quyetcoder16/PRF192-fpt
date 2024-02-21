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
	long long n = (long long)(2e10),*p=&n;
	printf("%d %d\n",p,*p);
	int *pp =(int*)p;
	printf("%d %d\n",*pp,(int*)p);
	printf("n=%lld\n",n);
	*pp = (int)(2e4);
	printf("%d %d\n",*pp,(int*)p);
	printf("n=%lld\n",n);
	return 0;
}
