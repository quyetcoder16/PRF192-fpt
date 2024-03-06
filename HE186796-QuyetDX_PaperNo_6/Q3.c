#include <stdio.h>

int main(){
	char c[4];
	int i =0;
	for(i=0;i<4;i++){
		scanf("%c",&c[i]);
		getchar();
	}
	int j=0;
	char t =' ';
	for(i=0;i<3;i++){
		for(j=i+1;j<4;j++){
			if(c[i]>c[j]){
				t=c[i];
				c[i]=c[j];
				c[j]=t;
			}
		}
	}
	for(i=0;i<4;i++) printf("%c ",c[i]);
	return 0;
}
