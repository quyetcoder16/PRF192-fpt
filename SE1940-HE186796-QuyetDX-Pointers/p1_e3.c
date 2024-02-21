//#include <stdio.h>;
//
//int t(int x,int y,int z){
//	int k = 2*x+3*y+5*z;
//	return k%13;
//}
//
//int main(){
//	int a = 7,b =6,c=5;
//	int l = t(b,a,c);
//	printf("%d",l);
//	return 0;
//}

//#include <stdio.h>
//
//void T(int *p,int *q){
//	int t=*p;
//	*p=*q;
//	*q=t;
//}
//
//int main(){
//	int a=7,b=6;
//	T(&a,&b);
//	printf("%d %d",a,b);
//	return 0;
//}

#include <stdio.h>

int T(int*p,int*q){
	int t=(*p)+(*q)>12?5:6;
//	printf("%d",t);
	return 2*t%5;
}

int main(){
	int a = 3,b=4,c;
	c = T(&a,&b);
	printf("%d",c);
	return 0;
}
