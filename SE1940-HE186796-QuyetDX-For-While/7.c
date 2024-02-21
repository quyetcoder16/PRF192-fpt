#include <stdio.h>

void swap(char *a,char *b){
	char tmp=*a;
	*a=*b;
	*b=tmp;
}

int main(){
	char c1,c2,c;
	printf("enter c1 , c2:");
	scanf("%c %c",&c1,&c2);
	if(c1>c2){
		swap(&c1,&c2);
	}
	for(c=c1;c<=c2;c++){
		printf("%c : %d , %o ,%X\n",c,c,c,c);
	}
	return 0;
}
