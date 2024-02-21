/*
Date: 15/01/2024
Class: SE1940
RollNumber: HE186796
FullName: Duong Xuan Quyet
Question: 2
*/

//Import Library
#include <stdio.h>
#include <math.h>

//Main function
int main() {

// Input

	int n;
	float a[n];
	printf("nhap n = ");
	scanf("%d",&n);
	printf("nhap %d so nguyen tren mot dong : ",n);
	int i = 0;
	for(i=0;i<n;i++) {
		scanf("%f",&a[i]);
	}

// Processing
	
	float sum = 0;
	float res = 1;
	for(i=0;i<n;i++){
		sum+=a[i];
		res*=a[i];
	}

//Output
  
  printf("trung binh cong la : %0.3f \n",sum*1.0f/n);
  printf("trung binh nhan la : %0.3f",pow(res,(1.0f/n)));
  return 0;
}
