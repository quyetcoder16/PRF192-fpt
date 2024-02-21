#include <stdio.h>
#include <stdlib.h>
#define MAXN 100

void input (int *a,int n);
int max(int a[],int n);
void print(int *a,int n);
void printEven(int *a,int n);

int main(){
	int *a;
	int n;
	int maxVal;
	do{
		printf("how many elements which will be used 1..%d",MAXN);
		scanf("%d",&n);
	}while(n<1||n>MAXN);
	a=(int*)calloc(n,sizeof(int));
	printf("enter %d values of the arrays\n",n);
	input(a,n);
	maxVal = max(a,n);
	printf("max value:%d\n",maxVal);
	printf("\ninputted array:");
	print(a,n);
	printf("\neven values in array:");
	printEven(a,n);
	return 0;
}

void input(int *a,int n){
	int i;
	for(i=0;i<n;i++) scanf("%d",&a[i]);
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
