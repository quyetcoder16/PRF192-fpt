#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int intRandom(int min,int max){
    return (int)(min + rand()% (max-min+1));
}

int main(){
	int total = 0;
	srand(time(NULL));
	do
	{ 
		scanf("%d",&total);
	}
	while (total<2 || total >20);
	printf("Ball Lottery\n");
	printf("============\n");
	printf("Total sought : %d\n",total);
	int count =1,x,y;
	do
	{
		x= intRandom(1,10);
		y= intRandom(1,10);
		printf("Result of picks %d and %d : %d + %d\n", count,count+1, x, y);
		count+=2;
	}
	while (x+y != total);
	printf("You got your total in %d picks!",count-1);
	return 0;
}
