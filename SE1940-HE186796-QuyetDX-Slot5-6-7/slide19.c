#include <stdio.h>

int main(){
	double a,b;
	char c;
	scanf("%lf%c%lf",&a,&c,&b);
	switch(c){
		case '+':{
			printf("%lf",a+b);
			break;
		}
		case'-':{
			printf("%lf",a-b);
			break;
		}
		case'*':{
			printf("%lf",a*b);
			break;
		}
		case '/':{
			if(b==0){
				printf("divide by 0");
			}else{
				printf("%lf",a/b);
			}
			break;
		}
		default:{
			printf("op is not supported");
			break;
		}
	}
	return 0;
}
