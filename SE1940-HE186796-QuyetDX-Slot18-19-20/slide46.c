#include <stdio.h>
#define MAXR 20
#define MAXC 20

void input(int m[][MAXC],int r,int c);
int max(int m[][MAXC],int r,int c);
void print(int a[][MAXC],int r,int c);


int main(){
	int m[MAXR][MAXC];
	int r,c;
	int maxVal;
	do{
		printf("enter number of rows and columns of the maxtrix:");
		scanf("%d%d",&r,&c);
	}while(r<1||r>MAXR||c<1||c>MAXC);
	printf("enter a matrix %d x %d\n",r,c);
	input(m,r,c);
	maxVal = max(m,r,c);
	printf("max value: %d\n",maxVal);
	printf("\n inputted matrix:\n");
	print(m,r,c);
	while (getchar()!='\n');getchar();
	return 0;
}

int max(int m[][MAXC],int r,int c){
	int res = m[0][0];
	int i,j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(res<m[i][j]) res = m[i][j];
		}
	}
	return res;
}

void print(int m[][MAXC],int r,int c){
	int i,j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%7d",m[i][j]);
		}
		printf("\n");
	}
}

void input(int m[][MAXC],int r,int c){
	int i,j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("value at a[%d][%d]",i,j);
			scanf("%d",&m[i][j]);
		}
	}
}
