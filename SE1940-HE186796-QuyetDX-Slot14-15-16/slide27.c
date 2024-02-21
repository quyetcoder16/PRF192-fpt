#include <stdio.h>

int main(){
	char c;
	int numOfDigits=0,numOfAlpha = 0,numOfOther = 0;
	while((c=getchar())!='\n'){
		if(c>='0'&&c<='9' ) numOfDigits++;
		else {
			if((c>='a'&&c<='z')||(c>='A'&&c<='Z')) numOfAlpha++;
			else numOfOther++;
		}
	}
	printf("numOfDigits = %d\n",numOfDigits);
	printf("numOfAlpha = %d\n",numOfAlpha);
	printf("numOfOther = %d\n",numOfOther);
	return 0;
}
