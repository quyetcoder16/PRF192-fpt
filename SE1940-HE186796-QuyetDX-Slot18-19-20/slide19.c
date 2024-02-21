#include <stdio.h>
#define MAXN 100

void input (int *a,int *pn);
int max(int a[],int n);
void print(int *a,int n);
void printEven(int *a,int n);

int main(){
	int a[MAXN];
	int n;
	int maxVal;
	input(a,&n);
	maxVal = max(a,n);
	printf("max value:%d\n",maxVal);
	printf("\ninputted array:");
	print(a,n);
	printf("\neven values in array:");
	printEven(a,n);
	return 0;
}

void input(int *a,int *pn){
	*pn = 0;
	printf("enter maxinum %d element, 0 for termination\n",MAXN);
	int x;
	do{
		scanf("%d",&x);
		if(x!=0) a[(*pn)++]=x;
	}while(x!=0 && *pn<MAXN);
}

int max(int a[],int n){
	int res = a[0];
	int i;
	for(i=1;i<n;i++)
		if(res<a[i]) res = a[i];
	return res;
}

void print(int *a,int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

void printEven(int* a,int n){
	int i;
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			printf("%d ",a[i]);
		}
	}
}
