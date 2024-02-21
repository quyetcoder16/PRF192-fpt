/*
Date: 17/1/2024
Class: SE1940
RollNumber:HE186796
FullName:Duong Xuan Quyet
Question: 2
*/

//Import Library
#include <stdio.h>

double TinhGiaiThua(long n){
	double res =1;
	long i=0;
	for(i=1;i<=n;i++){
		res*=i;
	}
	return res;
}

//Main function
int main() {

// Input

	long n;
	printf("nhap n = ");
	scanf("%ld",&n);

// Processing



//Output
  
  printf("Giai thua cua %ld la %lf",n,TinhGiaiThua(n));
  
  return 0;
}
