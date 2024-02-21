#include <stdio.h>

double equivalent (double r1,double r2,double r3){
	return 1/r1+1/r2+1/r3;
}

int main(){
	double r1,r2,r3,z;
	printf("\nInput 3 resistances:");
	scanf("%lf%lf%lf",&r1,&r2,&r3);
	printf("Their equivalent: %lf\n",equivalent(r1,r2,r3));
	return 0;
}
