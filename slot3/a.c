#include <stdio.h>


int main(){
	
//	char c[255];
//	getline("%s",&c);
//	int i =0;
//	for(i=0;i<100;i++){
//		printf("%s\n",c);
//	}
//	
//	for(i=1;i<=100;i++){
//		printf("%d ,",i);
//	}
//	printf("\n");
//	
//	for(i=200;i>=100;i--){
//		printf("%d ,",i);
//	}
//	printf("\n");
//	
//	for(i=200;i<=300;i++){
//		if(i%2==0) printf("%d ,",i);
//	}
//	printf("\n");
//	
//	for(i=500;i>=400;i--){
//		if(i%2==1) printf("%d ,",i);
//	}
//	printf("\n");
//	int n;
//	scanf("%d",&n);
//	int i,j;
//	for(i=0;i<n;i++){
//		for(j=0;j<i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}

//	
//	int n ;
//	do{
//		scanf("%d",&n);
//	}while(n<0||n>1000);
	
	
	int n = 0;
	do{
		printf("1: chon 1\n");
		printf("2: chon 2\n");
		printf("0.thoat\n");
		scanf("%d",&n);
		switch(n){
			case 1:{
				printf("chon 1");
				break;
			}
			case 2:{
				printf("chon 2");
				break;
			}
			case 0:{
				printf("exit");
				break;
			}
			default:{
				printf("yeu cau nhap nhap dung");
				break;
			}
		}
		printf("\n");
	}while(n!=0);
	
	
	return 0;
}
