#include <stdio.h>

int main(){
	int n = 7;
	int a[7];
	int i = 0;
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	int t=0,j=0;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<n;i++) printf("%d ",a[i]);
	return 0;
}
