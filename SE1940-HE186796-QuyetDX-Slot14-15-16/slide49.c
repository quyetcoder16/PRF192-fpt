#include <stdio.h>

int validDate(int d,int m,int y){
	int maxd = 31;
	if(d<1||d>31 || m<1 || m>12) return 0;
	if(m==4 || m==6 || m==9 || m==11) maxd = 30;
	if(m==2){
		if(y%400==0||(y%4==0&&y%100!=0)) maxd=29;
		else maxd=28;
	}
	return d<=maxd;
}

void date(){
	int d,y,m;
	printf("nhap day month year :");
	scanf("%d %d %d",&d,&m,&y);
	if(validDate(d,m,y)){
		printf("valid date\n");
	}else printf("invalid date!\n");
}

int menu(){
	printf("1- Processing date data\n");
	printf("2- Character data\n");
	printf("3- Quit\n");
	printf("Choose an operation:");
	int c;
	scanf("%d",&c);
	return c;
}

void character(){
	char c1,c2;
	getchar();
	printf("enter c1,c2:");
	c1=getchar();
	c2=getchar();
	if(c1<c2){
		char tmp=c1;
		c1=c2;
		c2=tmp;
	}
	char c;
	for(c=c1;c>=c2;c--){
		printf("%c %3d %o %X\n",c,c,c,c);
	}
	getchar();
}

int main(){

	int c;
	do{
		c = menu();
		switch(c){
			case 1:{
				date();
				break;
			}
			case 2:{
				character();
				break;
			}
			default:{
				printf("bye!");
				break;
			}
		}
	}while(c==1||c==2);
	
	return 0;
}
