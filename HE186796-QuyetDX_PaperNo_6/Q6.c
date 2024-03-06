#include <stdio.h>
#include <string.h>

int main(){
	char names[5][32];
	int i;
	int n = 5;
	for(i=0;i<n;i++){
		gets(names[i]);
	}
	char t[32];
	int j=0;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(names[i],names[j])==1){
				strcpy(t,names[i]);
				strcpy(names[i],names[j]);
				strcpy(names[j],t);
			}
		}
	}
	for(i=0;i<n;i++) printf("%s ",names[i]);
	return 0;
}

/*
John
Joe
Due
Long
Ming
*/
