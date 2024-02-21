#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(){
	int n = 10;
	char s[11] = "Hello";
	int m = 9;
	printf("Variable n: addr: %u, value:%d\n",&n,n);
	printf("Variable s: addr: %u, value:%s\n",&s,s);
	printf("Variable m: addr: %u, value:%d\n",&m,m);
	printf("the length of s:%d\n",strlen(s));	
	return 0;
}
