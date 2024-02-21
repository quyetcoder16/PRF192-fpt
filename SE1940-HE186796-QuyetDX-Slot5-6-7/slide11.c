#include <stdio.h>

int main(){
	int mark;
	int reward = 0;
	int noOfShirts = 0;
	printf("Your mark :");
	scanf("%d",&mark);
	if(mark>7){
		reward = 500000;
		noOfShirts = 2;
	}else{
		reward = 0;
		noOfShirts = 0;
	}
	printf("Reward:%d, shirt:%d\n",reward,noOfShirts);
	return 0;
}
