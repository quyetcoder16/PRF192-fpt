#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int res = 0;
	int count = 0;
	while(n>0&&count!=3){
		if(n%2==0){
			res+=n;
			count++;
		}
		n--;
	}
	printf("%d",res);
}
