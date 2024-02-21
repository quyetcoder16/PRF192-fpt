#include <stdio.h>
#include <string.h>

void getstr(char s[],int max){
	int i,c;
	i = 0;
	while ((c=getchar())!= '\n' && c!=EOF){
		if (i<max) s[i++] = (char)c;
	}
	s[i]='\0';
}

int main(){
	char s[100];
	getstr(s,12);
	printf(s);
	return 0;
}
