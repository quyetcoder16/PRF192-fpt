/*
Date: 31/1/2024
Class: SE1940
RollNumber:HE186796
FullName:Duong Xuan Quyet
Question: 3
*/

//Import Library
#include <stdio.h>
#include <math.h>


//Main function
int main() {

// Input

	int n,m;
	do{
		printf("Input M = ");
		scanf("%d",&m);
		printf("Input N = ");
		scanf("%d",&n);
	}while(n<=0||m<=0);
	
	
// Processing



//Output

	int i,j;
	for(i=0;i<m;i++){
		if(i==0||i==m-1){
			for(j=0;j<n;j++) printf("* ");
		}else{
			if(n==1) printf("*");
			else{
				printf("* ");
				for(j=0;j<n-2;j++) printf("  ");
				printf("* ");
			}
		}
		printf("\n");
	}
 	
  
  return 0;
}
