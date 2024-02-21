/*
Date: 15/01/2024
Class: SE1940
RollNumber: HE186796
FullName: Duong Xuan Quyet
Question: 10
*/

//Import Library
#include <stdio.h>

//Main function
int main() {

// Input

	printf("nhap n = ");
	int n ;
	scanf("%d",&n);

// Processing


//Output
  
  int i=0,j=0,l=0;
  for(i=n;i>=1;i--){
  	for(l=1;l<=n-i;l++){
  		printf(" ");
	}
	for(j=1;j<=i;j++){
	  	printf("*");
	}
  	printf("\n");
  }
  
  return 0;
}
