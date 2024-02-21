//#include <stdio.h>
//
//int main(){
//	double x =1200;
//	double *p=&x;
//	*p = 1200;
//	printf("adrres: %d, value: %d\n",p+8,*(p+8));
//	printf("adrres: %d, value: %d\n",p-3,*(p-3));
//	printf("adrres: %d, value: %d\n",++p,*(++p));
//	return 0;
//}

//#include <stdio.h>
//
//int main(){
//	long x =1000;
//	long *p=&x;
//	*p = 1000;
//	printf("adrres: %d, value: %ld\n",p+8,*(p+8));
//	printf("adrres: %d, value: %ld\n",p-3,*(p-3));
//	printf("adrres: %d, value: %ld\n",++p,*(++p));
//	return 0;
//}

#include <stdio.h>

int main(){
	char x =20700;
	char *p=&x;
	*p = 20700;
	printf("adrres: %d, value: %d\n",p+8,*(p+8));
	printf("adrres: %d, value: %d\n",p-3,*(p-3));
	printf("adrres: %d, value: %d\n",++p,*(++p));
	return 0;
}
