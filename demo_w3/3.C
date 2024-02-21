#include <stdio.h>

int getRelPos(float r,float a,float b){
	float d = a*a + b*b;
	float r1 = r*r;
	if(d<r1) return 1;
	else if(d==r1) return 0;
	else return -1;
}

int main(){
	float a,b,r;
	printf("enter x ,y,r :");
	scanf("%f %f %f",&a,&b,&r);
	if(getRelPos(r,a,b)==1){
		printf("A in circle");
	}else if(getRelPos(r,a,b)==0) printf("A on the circle!");
	else printf("A is out the circle!");
	return 0;
}
