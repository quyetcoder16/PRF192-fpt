#include <stdio.h>

int main(){
	int n;
	double x,y;
	printf("Enter an integer: ");
	scanf("%d",&n);
	printf("Enter 2 real number :");
	scanf("%lf%lf",&x,&y);
	double num1,num2;
	char op;
	printf("enter an expression + - * / :");
	scanf("%lf%c%lf",&num1,&op,&num2);
	printf("Expression inputted is %lf%c%lf",num1,op,num2);
	getchar();
	getchar();
	return 0;
}
