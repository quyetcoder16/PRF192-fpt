#include <stdio.h>
#include <conio.h>

int maxN = 100;
double pi = 3.141592;

double CalcImp(double r1,double r2,double r3){
	double t = 1/(1/r1+1/r2+1/r3);
	printf("r1 addr:%u,value:%lf\n",&r1,r1);
	printf("r2 addr:%u,value:%lf\n",&r2,r2);
	printf("r3 addr:%u,value:%lf\n",&r3,r3);
	printf("t addr:%u,value:%lf\n",&t,t);
	return t;
}

int main(){
	double r1 = 3,r2 = 8,r3 = 9;
	printf("maxN addr:%u,value : %d\n",&maxN,maxN);
	printf("pi addr:%u,value:%lf\n",&pi,pi);
	printf("r1 addr:%u,value:%lf\n",&r1,r1);
	printf("r2 addr:%u,value:%lf\n",&r2,r2);
	printf("r3 addr:%u,value:%lf\n",&r3,r3);
	printf("main addr:%u\n",&main);
	printf("calclmp addr:%u\n",&CalcImp);
	printf("impedance: %lf",CalcImp(r1,r2,r3));
	return 0;
}
