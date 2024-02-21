#include <stdio.h>

int main(){
	int year = 0;
	scanf("%d",&year);
	int duration = 2024 - year ;
	if(duration<10) printf("khong co de xuat");
	else if(duration<15){
		printf("bao tri");
	}else {
		printf("thay the");
	}
	return 0;
}
