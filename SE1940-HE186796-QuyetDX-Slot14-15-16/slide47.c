#include <stdio.h>

int main(){
	int n;
	long lo;
	char ch;
	double d;
	printf("input a integer, a long number, a character: ");
	printf("and a double number:(use black)");
	scanf("%d %ld %c %lf",&n,&lo,&ch,&d);
	printf("%-20s:%10d%15ld%5c%12.6lf\n","The inputed values are",n,lo,ch,d);
	return 0;
}
