#include <stdio.h>

void printMenu(){
	printf("===========================\n");
	printf("1-fibonacci sequence \n");
	printf("2-check a date \n");
	printf("3-quits\n");
}

void printFibo(long long n){
	long long a[100000];
	a[0]=1;
	a[1]=1;
	int i =0;
	for(i=2;i<n;i++){
		a[i]=a[i-1]+a[i-2];
	}
	for(i=0;i<n;i++){
		printf("%lld ,",a[i]);
	}
	printf("\n");
}

int checkDate(int d,int m,int y){
	int maxd = 31;
	if(d<1||d>31) return 0;
	if (m==4||m==6||m==9||m==11) maxd = 30;
	if(m==2){
		if(y%400==0||(y%4==0&&y%100!=0)) maxd=29;
		else maxd=28;
	}
	return d>maxd;
}

int main(){
	int c = 3;
	long long n;
	do{
		printMenu();
		scanf("%d",&c);
		switch(c){
			case 1:{
				printf("enter n =");
				scanf("%lld",&n);
				printFibo(n);
				break;
			}
			case 2:{
				int d,m,y;
				printf("enter year = ");
				scanf("%d",&y);
				printf("enter month = ");
				scanf("%d",&m);
				if(m>12||m<1){
					printf("invalid month!\n");
				}else {
					printf("enter day = ");
					scanf("%d",&d);
					if(checkDate(d,m,y)){
						printf("valid date!\n");
					}else {
						printf("invalid date!\n");
					}
				}
				break;
			}
			default:{
				printf("error input!\n");
				break;
			}
		}
	}while(c!=3);
	return 0;
}
