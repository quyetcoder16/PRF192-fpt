/*
Date: 17/1/2024
Class: SE1940
RollNumber:HE186796
FullName:Duong Xuan Quyet
Question: 4
*/

//Import Library
#include <stdio.h>

void solve(long long n){
	if(n/500>0) printf("so to 500k : %lld to\n",n/500);
	n-=(n/500)*500;
	if(n/200> 0) printf("so to 200k : %lld to\n",n/200);
	n-=(n/200)*200;
	if(n/100>0) printf("so to 100K : %lld to\n",n/100);
	n-=(n/100)*100;
	if(n/50>0) printf("so to 50K : %lld to\n",n/50);
	n-=(n/50)*50;
	if(n/20>0) printf("so to 20k : %lld to\n",n/20);
	n-=(n/20)*20;
	if(n/10>0) printf("so to 10k : %lld to\n",n/10);
	n-=(n/10)*10;
	if(n/5>0) printf("so to 5k : %lld to\n",n/5);
	n-=(n/5)*5;
	if(n/2>0) printf("so to 2k : %lld to\n",n/2);
	n-=(n/2)*2;
	if(n>0) printf("so to 1k : %lld to\n",n);
}

//Main function
int main() {

// Input

	long long n = 0;
	printf("Nhap so tien don vi (K dong): ");
	scanf("%lld",&n);

// Processing

	solve(n);

//Output
  
  
  return 0;
}
