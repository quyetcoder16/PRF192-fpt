#include <stdio.h>
#include <stdlib.h>

int main(){
	char *c1 =(char*)malloc(sizeof(char)),*c2=(char*)malloc(sizeof(char));
	scanf("%c %c",c1,c2);
	if(*c1>*c2){
		char tmp = *c1;
		*c1 = *c2;
		*c2 = tmp;
	}
	char c;
	for(c=*c1;c<=*c2;c++){
		printf("%c,%4d,%4o,%4X\n",c,c,c,c);
	}
	free(c1);
	free(c2);
	return  0;
}
