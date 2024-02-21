#include <stdio.h>
//slide error
double PI=3.14;

double areCircle(double r){
	return PI*r*r;
}

double areElipse(double rx,double ry) {
	return PI*rx*ry;
}

int main(){
	printf("PI = %lf\n",PI);
	printf("Area of a circle:%lf\n",areCircle(3.5));
	printf("Area of an elipse:%lf\n",areElipse(1,2));
	return 0;
}
