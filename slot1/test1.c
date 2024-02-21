#include <stdio.h>
#include <stdlib.h> 


int main(){
	int total = 1;
	printf("Ball Lotter");
	printf("============");
	printf("Total sought : ");
	scanf("%d",&total);
	printf("%d",total);
	int a = 0,b = 0;
	int i = 0;
	while(a+b!=total){
		i++;
		a = (int)(rand() % 10) + 1; 
        b = (int)(rand() % 10) + 1; 
        printf("\nResult of picks %d and %d : %d + %d ",i,i+1,a,b);
        i++;
	}
	printf("\nYou got your total in %d picks!",i);
	
	return 0;
}
