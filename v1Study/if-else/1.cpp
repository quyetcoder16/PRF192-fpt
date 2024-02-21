#include <stdio.h>

int main(){
	int cost,time;
	printf("nhap time : ");
	scanf("%d",&time);
	printf("nhap cost : ");
	scanf("%d",&cost);
	float bonus = 0;
	if(time>=200){
		bonus = 0.2f * cost;
	}else{
		if(time >=100){
			bonus = 0.1f * cost;
		}
	}
	
	printf("bonus is %0.2f \n",bonus);
	return 0;
}
