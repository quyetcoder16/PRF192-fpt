#include <stdio.h>
#include<stdlib.h>

#define MAXN 100

int menu(){
	printf("\n1 - add a value");
	printf("\n2-search a value");
	printf("\n3-print out the array");
	printf("\n4-Print out values in a range");
	printf("\n5-print out the array in ascending order");
	printf("\nOther-quit");
	printf("\nSelect:");
	int c;
	scanf("%d",&c);
	return c;
}

int isFull(int *a,int n){
	return n==MAXN;
}

int isEmpty(int *a,int n){
	return n==0;
}

void add(int value,int *a,int *pn){
	a[*pn] = value;
	(*pn)++;
}

int search(int x,int *a,int n){
	int i;
	for(i=0;i<n;i++) if(a[i]==x) return i;
	return -1;
}

void printAsc(int *a,int n){
	int **adds = (int**)calloc(n,sizeof(int *));
	int i,j;
	for(i=0;i<n;i++) adds[i] = &a[i];
	int *t;
	for(i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){
			if(*adds[j]<*adds[j-1]){
				t = adds[j];
				adds[j] = adds[j-1];
				adds[j-1] = t;
			}
		}
	}
	for(i=0;i<n;i++) printf("%d ",*adds[i]);
	free(adds);
}

void print(int *a,int n){
	int i;
	for(i=0;i<n;i++) printf("%d ",a[i]);
}

void printRange(int *a,int n){
	int minVal,maxVal;
	printf("\nenter minVal");
	scanf("%d",&minVal);
	printf("enter maxVal");
	scanf("%d",&maxVal);
	int i;
	for(i=0;i<n;i++){
		if(a[i]>=minVal&&a[i]<=maxVal) printf("%d ",a[i]);
	}
}

int main(){
	int a[MAXN];
	int n = 0;
	int value;
	int user;
	do{
		user =menu();
		switch(user){
			case 1:{
				if(isFull(a,n)) printf("\nSorry! the array is full.\n");
				else {
					printf("Input an added value:");
					scanf("%d",&value);
					add(value,a,&n);
					printf("Added\n");
				}
				break;
			}
			case 2:{
				if(isEmpty(a,n)) printf("\nsory!the array is empty\n");
				else{
					printf("input the searched value:");
					scanf("%d",&value);
					int pos = search(value,a,n);
					if(pos<0) printf("not found\n");
					else printf("postion is found:%d\n",pos);
				}
				break;
			}
			case 3:{
				print(a,n);
				break;
			}
			case 4:{
				printRange(a,n);
				break;
			}
			case 5:{
				printAsc(a,n);
				break;
			}
			default:{
				printf("\nGoodbye.\n");
				break;
			}
		}
	}while(user>0&&user<6);
	return 0;
}
