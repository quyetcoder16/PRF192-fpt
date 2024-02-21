#include <stdio.h>
#include <conio.h>

int main(){
	char s1[15] = "ABC";
	char s2[15] = {'a','b','c','\0'};
	int i;
	printf("data store for s1 : \n");
	for(i=0;i<15;i++) printf("%d ",s1[i]);
	printf("\ndata store for s2 : \n");
	for(i=0;i<15;i++) printf("%d ",s2[i]);
	return 0;
}
