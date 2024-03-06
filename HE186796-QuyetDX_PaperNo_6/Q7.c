#include <stdio.h>
#include <string.h>

int main(){
	char s[32];
	gets(s);
	int index = (strlen(s)-5)/2;
	int i =0;
	for(i=index;i<index+5;i++) printf("%c",s[i]);
	return 0;
}
