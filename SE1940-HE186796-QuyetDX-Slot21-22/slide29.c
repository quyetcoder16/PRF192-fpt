#include <stdio.h>
#include <string.h>

int countingWords(char *s){
	int l = strlen(s);
	int count = 0;
	int i=0;
	for(i=0;i<l;i++){
		if(s[i]!=' '&&(i==0||s[i-1]==' ')) count++;
	}
	return count;
}

int main(){
	char s[100];
	gets(s);
	printf("%s has %d words\n",s,countingWords(s));
	return 0;
}
