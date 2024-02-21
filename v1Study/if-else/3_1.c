#include <stdio.h>
#define rep(i,a,b) for(i=a;i<=b;i++)
#define per(i,a,b) for(i=a;i>=b;i--)

int max(int a[],int n){
	int res = a[0];
	int i = 0;
	for(i=0;i<n;i++){
		if(res<a[i]){
			res = a[i];
		}
	}
	return res;
}

int min(int a[],int n){
	int res = a[0];
	int i = 0;
	for(i=0;i<n;i++){
		if(res>a[i]){
			res = a[i];
		}
	}
	return res;
}

void sortASC(int a[],int n){
	int i,j;
	rep(i,0,n-2){
		rep(j,i+1,n-1){
			if(a[i]>a[j]){
				int tmp = a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
}
void sortDESC(int a[],int n){
	int i,j;
	rep(i,0,n-2){
		rep(j,i+1,n-1){
			if(a[i]<a[j]){
				int tmp = a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	rep(i,0,n-1) {
		scanf("%d",&a[i]);
	}
	printf("max = %d \n",max(a,n));
	printf("min = %d \n",min(a,n));
	sortASC(a,n);
	rep(i,0,n-1){
		printf("%d ,",a[i]);
	}
	printf("\n");
	sortDESC(a,n);
	rep(i,0,n-1){
		printf("%d ,",a[i]);
	}
	return 0;
}
