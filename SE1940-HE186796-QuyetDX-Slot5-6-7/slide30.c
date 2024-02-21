#include <stdio.h>
#define ENTER 10
int main(){
	int noDigits =0,noLetters = 0,noOther =0;
	char c;
	printf("enter a string:");
	while(c!=ENTER){
		scanf("%c",&c);
		if(c>='0'&&c<='9') noDigits++;
		else if((c>='a'&&c<'z')||(c>='A'&&c<='Z')) noLetters++;
		else noOther++;
	}
	printf("noDigits = %d\n",noDigits);
	printf("noLetters = %d\n",noLetters);
	printf("noOther = %d\n",noOther-=1);
	return 0;	
}
