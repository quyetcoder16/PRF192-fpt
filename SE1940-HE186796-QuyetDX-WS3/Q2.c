/*
Date: 31/1/2024
Class: SE1940
RollNumber:HE186796
FullName:Duong Xuan Quyet
Question: 2
*/

//Import Library
#include <stdio.h>
#include <math.h>

int checkPalindrome(long long n){
	int n1=n;
	int tmp =0;
	while(n>0){
		tmp=tmp*10+n%10;
		n/=10;
	}
	return tmp==n1;
}


//Main function
int main() {

// Input

	
// Processing



//Output
 	printf("cac so Palindrome co 3 chu so la: ");
 	long long i=0;
 	for(i=100;i<=999;i++){
 		if(checkPalindrome(i)) printf("%lld ",i);
	 }
  
  return 0;
}
