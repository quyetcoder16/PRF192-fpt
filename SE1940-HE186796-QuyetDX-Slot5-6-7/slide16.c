#include <stdio.h>

int main(){
	int mark;
	int reward = 0;
	int noOfShirts = 0;
	printf("Your mark :");
	scanf("%d",&mark);
//	reward = mark>8?500000:0;
//	printf("reward: %d\n",reward);

//	printf(mark>8?"50000":"0");

	(mark>8)?printf("50000"):printf("0");
	return 0;
}
