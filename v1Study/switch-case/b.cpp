#include <stdio.h>

bool checkNhuan(int year){
	if(year%100==0 && year%400==0) return 1;
	if(year%4==0) return 1;
	return 0;
}

int main(){
	int month,year;
	printf("nhap thang = ");
	scanf("%d",&month);
	printf("nhap nam = ");
	scanf("%d",&year);
	switch(month){
		case 4:
		case 6:
		case 9:
		case 11:{
			printf("thang %d co 30 ngay",month);
			break;
		}
		case 2:{
			if(checkNhuan(year)){
				printf("thang 2 co 29 ngay");
			}else {
				printf("thang 2 co 28 ngay");
			}
			break;
		}
		default:{
			printf("thang %d co 31 ngay",month);
			break;
		}
	}
	return 0;
}
