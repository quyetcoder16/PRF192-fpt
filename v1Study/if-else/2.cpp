#include <stdio.h>

int main(){
	int mark = 0;
	scanf("%d",&mark);
	int scholarship = 0;
	if(mark<7&&mark<=10)  scholarship = 0;
	else {
		if(mark<8) scholarship = 100000;
		else {
			if(mark<9) scholarship = 300000;
			else scholarship  = 5000000;
		}
	}
	printf("scholarship : %d",scholarship);
	return 0;
}
