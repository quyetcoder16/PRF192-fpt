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
	while (total<2 || total >12);
	printf("Dice Thrower\n");
	printf("============\n");
	printf("Total sought : %d\n",total);
	int count =1,x,y;
	do
	{
		x= intRandom(2,6);
		y= intRandom(2,6);
		printf("esult of throw %d : %d + %d\n", count, x, y);
		count++;
	}
	while (x+y != total);
	printf("You got your total in %d throws!",count-1);
	return 0;
}
