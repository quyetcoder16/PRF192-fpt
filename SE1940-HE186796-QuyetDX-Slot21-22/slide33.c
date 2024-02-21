#include <stdio.h>
#include <string.h>

char* replaceAll(char* source,char* substr,char *repstr){
	int subL = strlen(substr);
	int repL = strlen(repstr);
	char temp[100];
	int i;
	char *ptr = strstr(source,substr);
	while(ptr != NULL){
		strcpy(ptr,ptr+subL);
		if(repL>0){
			strcpy(temp,ptr);
			strcpy(ptr+repL,temp);
			for(i=0;i<repL;i++) *(ptr+i)=repstr[i];
		}
		ptr = strstr(source,substr);
	}
	return source;
}

int main(){
	char s[80] = "con coc trong hang con coc nhay ra, coc chet";
	char substr[21] = "coc";
	char repstr[21] = "bo";
	replaceAll(s,substr,repstr);
	puts(s);
	return 0;
}
