#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool checkSpecial(int n){
	int check = 0;
	int tmp =n;
	while(n!=0){
		check=check+(n%10)*(n%10)*(n%10);
		n/=10;
	}
	return (bool)(check==tmp);
} 

int main(){
	float n;
	scanf("%f",&n);
	if((int)(n)-n == 0){
		printf("la so nguyen\n");
		if((int)(n)%2==0){
			printf("la so chan\n");
			if(n>0){
				printf("la so chan duong\n");
			}else {
				printf("ko la so chan duong\n");
			}
			printf("khong la so le am\n");
		}else {
			printf("la so le\n");
			printf("khong la so chan duong\n");
			if(n<0) {
				printf("la so le am\n");
			}else{
				printf("ko la so le am\n");
			}
		}
		int _sqrt = sqrt(n);
		if(_sqrt*_sqrt==n) {
			printf("la so chinh phuong\n");
		}else {
			printf("ko la so chinh phuong\n");
		}
		if(checkSpecial((int)(n))){
			printf("la so dac biet");
		}else{
			printf("ko la so dac biet");
		}
	}else {
		printf("khong la so nguyen\n");
		printf("khong the xet chan le\n");
	}
	
	return 0;
}
