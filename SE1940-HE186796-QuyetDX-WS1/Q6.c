/*
Date: 15/01/2024
Class: SE1940
RollNumber: HE186796
FullName: Duong Xuan Quyet
Question: 6
*/

//Import Library
#include <stdio.h>

//Main function
int main() {

// Input

	float luong = 0;
	printf("nhap muc luong ");
	scanf("%f",&luong);


// Processing


//Output
  
  if(luong>=100000000) printf("muc luong lanh dao!\n");
  else{
  	if(luong>=80000000) printf("muoc luong quan ly!\n");
  	else{
  		if(luong>=50000000) printf("muc luong quan ly cap trung!\n");
  		else {
  			if(luong>=30000000) printf("muc luong truong nhom!\n");
  			else printf("muc luong nhan vien!\n");
		  }
	}
  }
	  
  return 0;
}
