#include <stdio.h>
#include <string.h>

int checkDigit(char c){
	return (c>='0'&&c<='9');
}

int countingDigits(char *s){
	int l = strlen(s);
	int count = 0;
	int i=0;
	for(i=0;i<l;i++){
		if(checkDigit(s[i])&&(i==0|| !checkDigit(s[i-1]))) count++;
	}
	return count;
}

int main(){
	char s[100];
	gets(s);
	printf("%s has %d digits\n",s,countingDigits(s));
	return 0;
}
