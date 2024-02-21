#include <stdio.h>

int main(){
	int mark;int reward;;int noOfShirt;
	printf("Your mark:");
	scanf("%d",&mark);
	switch(mark){
		case 10:{
			reward = 1e6;
			noOfShirt=4;
			break;
		}
		case 9:{
			reward = 5e5;
			noOfShirt = 3;
			break;
		}
		case 8:{
			reward = 2e5;
			noOfShirt = 2;
			break;
		}
		case 7:{
			reward = 1e5;
			noOfShirt = 1;
			break;
		}
		default:{
			reward = 0;
			noOfShirt = 0;
			break;
		}
	}
	printf("Reward: %d,Shirt: %d",reward,noOfShirt);
	return 0;
}
