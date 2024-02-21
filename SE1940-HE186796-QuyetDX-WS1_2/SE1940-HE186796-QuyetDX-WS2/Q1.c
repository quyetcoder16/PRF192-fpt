/*
Date: 17/1/2024
Class: SE1940
RollNumber:HE186796
FullName:Duong Xuan Quyet
Question: 1
*/

//Import Library
#include <stdio.h>

float tong(float a,float b,float c){
	return a+b+c;
}

float tich(float a,float b,float c){
	return a*b*c;
}

//Main function
int main() {

// Input
	
	float a,b,c;
	printf("Enter a number 1 : ");
	scanf("%f",&a);
	printf("Enter a number 2 : ");
	scanf("%f",&b);
	printf("Enter a number 3 : ");
	scanf("%f",&c);

	
// Processing



//Output
  
  printf("tong 3 so la: %0.3f \n",tong(a,b,c));
  printf("tich 3 so la: %0.3f",tich(a,b,c));
  
  return 0;
}
