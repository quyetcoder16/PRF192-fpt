#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	scanf("%d",&n);
	int *pArr = (int*)calloc(n,sizeof(int));
//	int *pArr = (int*)malloc(n*sizeof(int)); init drag
	int i;
	for(i=0;i<n;i++){
		printf("%d ",*(pArr+i));
	}
	for(i=0;i<n;i++){
		scanf("%d",(pArr+i));
	}
	for(i=0;i<n;i++){
		printf("%d ",*(pArr+i));
	}
	
	int n1;
	scanf("%d",&n1);
	pArr = (int*)realloc(pArr,sizeof(int)*n1);
	for(i=n;i<n1;i++){
		scanf("%d",(pArr+i));
	}
	
	for(i=0;i<n1;i++){
		printf("%d ",*(pArr+i));
	}
	
	free(pArr);
	return 0;
}
