#include<stdio.h>

int checkSymmetric(int *a,int n){
	int b[20];
	int i =0;
	int j=0;
	for(i=n-1;i>=0;i--){
		b[j++]=a[i];
	}
	for(i=0;i<n;i++){
		if(a[i]!=b[i]) return 0;
	}
	return 1;
}

int main(){
	int a[20];
	int n;
	scanf("%d",&n);
	int i = 0;
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	printf("%d",checkSymmetric(a,n));
	return 0;
}
