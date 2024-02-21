/*
Date: 15/01/2024
Class: SE1940
RollNumber: HE186796
FullName: Duong Xuan Quyet
Question: 5
*/

//Import Library
#include <stdio.h>

//Main function
int main() {

// Input
	
	float x,y,z;
	printf("Nhap x: ");
    scanf("%f", &x);
    printf("Nhap y: ");
    scanf("%f", &y);
    printf("Nhap z: ");
    scanf("%f", &z);

// Processing
	
	float res = (--x + --y + z--) * 2 + ++y *2;

//Output
  
  	printf("A = %f",res);
  
  return 0;
}
