#include <stdio.h>
#include<stdlib.h>

#define MAXN 100

int menu(){
	printf("\nOne-Dimensional Array of Integers");
	printf("\n1 - add a value");
	printf("\n2-search a value");
	printf("\n3-remove the fist existence of a value");
	printf("\n4-remove all exist ");
	printf("\n5-print out the array");
	printf("\n6-print out the array in ascending order");
	printf("\n7-print out the array in descending order");
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

int removeOne (int pos,int *a,int *pn){
	if(pos<0||pos>*pn) return 0;
	int i;
	for(i=pos;i<*pn-1;i++) a[i] = a[i+1];
	(*pn)--;
	return 1;
}

int removeAll(int x,int *a,int *pn){
	int res = 0;
	int i,j;
	for(i=(*pn)-1;i>=0;i--){
		if(a[i]==x){
			res =1;
			for(j=i;j<(*pn)-1;j++) a[j] = a[j+1];
			(*pn)--;
		}
	}
	return res;
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

void printDesc(int *a,int n){
	int **adds = (int**)calloc(n,sizeof(int *));
	int i,j;
	for(i=0;i<n;i++) adds[i] = &a[i];
	int *t;
	for(i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){
			if(*adds[j]>*adds[j-1]){
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
				if(isEmpty(a,n)) printf("\nsorry!the array is empty\n");
				else {
					printf("input the removed value:");
					scanf("%d",&value);
					int pos = search(value,a,n);
					if(pos<0) printf("not found!\n");
					else {
						removeOne(pos,a,&n);
						printf("removed!\n");
					}
				}
				break;
			}
			case 4:{
				if(isEmpty(a,n)) printf("\nsorry!the array is empty\n");
				else {
					printf("input a value that will remove all:");
					scanf("%d",&value);
					if(removeAll(value,a,&n)==0) printf("not found!\n");
					else printf("removed!\n");
				}
				break;
			}
			case 5:{
				print(a,n);
				break;
			}
			case 6:{
				printAsc(a,n);
				break;
			}
			case 7:{
				printDesc(a,n);
				break;
			}
			default:{
				printf("\nGoodbye.\n");
				break;
			}
		}
	}while(user>0&&user<8);
	return 0;
}
