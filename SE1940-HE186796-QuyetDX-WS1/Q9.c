/*
Date: 15/01/2024
Class: SE1940
RollNumber: HE186796
FullName: Duong Xuan Quyet
Question: 9
*/

//Import Library
#include <stdio.h>

//Main function
int main() {

// Input


// Processing

	int chicken = 0;
	for(chicken=0;chicken<=36;chicken++){
		if(chicken*2+(36-chicken)*4==100){
			break;
		}
	}

//Output
  
  printf("so con ga la : %d\n",chicken);
  printf("so con cho la : %d\n",36-chicken);
  
  return 0;
}
