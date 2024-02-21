#include <stdio.h>

int firstLinearSearch(int x,int a[],int n){
	int i;
	for(i=0;i<n;i++){
		if(x==a[i]) return i;
	}
	return -1;
}

int lastLinearSearch(int x,int a[],int n){
	int i;
	for(i=n-1;i>=0;i--){
		if(x==a[i]) return i;
	}
	return -1;
}

int main(){
	int a[] = {3,34,5,1,2,8,9,2,9},x=2;
	int pos1 = firstLinearSearch(x,a,9);
	if(pos1>=0){
		int pos2 = lastLinearSearch(x,a,9);
		printf("first existence:%d, last existence:%d\n",pos1,pos2);
	}else printf("%d does not exist!\n",x);
	return 0;
}
