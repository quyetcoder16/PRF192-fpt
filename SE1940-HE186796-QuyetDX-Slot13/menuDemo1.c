#include <stdio.h>

int getUserchoice(){
	int c;
	printf("\n1-operation 1");
	printf("\n2-operation 2");
	printf("\nOther-quit");
	printf("\nchoose");
	scanf("%d%*c",&c);
	return c;
}

int sumBetween(int a,int b){
	int t;
	if(a>b){
		t=a;
		a=b;
		b=t;
	}
	int s=0;
	for(t=a;t<=b;t++) s+=t;
	return s;
}

void function1(){
	int n1,n2;
	printf("enter 2 integers:");
	scanf("%d%d%*c",&n1,&n2);
	printf("sum=%d\n",sumBetween(n1,n2));
}

void printAscii(char c1,char c2){
	char c;
	if(c1>c2){
		c=c1;
		c1=c2;
		c2=c;
	}
	for(c=c1;c<=c2;c++){
		printf("%c,%3d,%3op,%3Xh\n",c,c,c,c);
		
	}
}

void function2(){
	char c1,c2;
	printf("enter 2 characters contiguously:");
	scanf("%c%c",&c1,&c2);
	printAscii(c1,c2);
}

int main(){
	int c;
	do{
		c=getUserchoice();
		switch(c){
			case 1:{
				function1();
				break;
			}
			case 2:{
				function2();
				break;
			}
		}
	}while(c>0&&c<3);
	return 0;
}
