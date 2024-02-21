#include <stdio.h>

int main(){
	char c;
	int result;
	printf("input a character: ");
	c=getchar();
	printf("the inputted character is : ");
	result = putchar(c);
	printf("\n the result of putchar is %d",result);
	return 0;
}
