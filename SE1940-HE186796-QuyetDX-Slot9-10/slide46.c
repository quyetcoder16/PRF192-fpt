#include <stdio.h>

int sum(int a,int b){
	int t=a+b;
	return t;
}

int main(){
	int x = 5, y =6;
	int z = sum(x,y);
	printf("result: %d\n",z);
	return 0;
}
