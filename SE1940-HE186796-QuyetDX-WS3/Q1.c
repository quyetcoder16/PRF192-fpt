/*
Date: 31/1/2024
Class: SE1940
RollNumber:HE186796
FullName:Duong Xuan Quyet
Question: 1
*/

//Import Library
#include <stdio.h>
#include <math.h>

int checkPri(long long n){
	if(n<2) return 0;
	long long i =0;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}


//Main function
int main() {

// Input
	
	long long n = 0;
	do{
		printf("nhap n = ");
		scanf("%lld",&n);
	}while(n<=0);
	

	
// Processing



//Output
 	printf("cac so nguyen to tu 1 den n la: ");
 	long long i=0;
 	for(i=0;i<=n;i++){
 		if(checkPri(i)) printf("%lld ",i);
	 }
  
  return 0;
}
