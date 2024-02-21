/*
Date: 15/01/2024
Class: SE1940
RollNumber: HE186796
FullName: Duong Xuan Quyet
Question: 3
*/

//Import Library
#include <stdio.h>

//Main function
int main() {

// Input
	
	float a[4];
	printf("nhap 4 so tren mot dong : ");
	int i = 0;
	for(i=0;i<4;i++){
		scanf("%f",&a[i]);
	}

// Processing

	float min = a[0],max = a[0],tong = a[0],tich = a[0];
	for(i=1;i<4;i++){
		if(a[i]<min) min = a[i];
		if(a[i]>max) max = a[i];
		tong+=a[i];
		tich*=a[i];
	}
	
//Output
  
  printf("max : %f\n",max);
  printf("min : %f\n",min);
  printf("tong : %f\n",tong);
  printf("tich : %f\n",tich);
  
  return 0;
}
