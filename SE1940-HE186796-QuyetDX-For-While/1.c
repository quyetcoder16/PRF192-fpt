#include <stdio.h>

int main(){
	double a,b;
	char op;
	printf("enter a,op,b :");
	scanf("%lf %c %lf",&a,&op,&b);
	switch(op){
		case'+':{
			printf("%lf + %lf = %lf\n",a,b,a+b);
			break;
		}
		case'-':{
			printf("%lf - %lf = %lf\n",a,b,a-b);
			break;
		}
		case '*':{
			printf("%lf * %lf = %lf\n",a,b,a*b);
			break;
		}
		case '/':{
			if(b==0){
				printf("devide by 0");
			}else{
				printf("%lf / %lf = %lf\n",a,b,a/b);
			}
			break;
		}
		default:{
			printf("Op is not supported");
			break;
		}
	}
	
	return 0;
}
