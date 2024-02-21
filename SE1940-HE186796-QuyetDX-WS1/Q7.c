/*
Date: 15/01/2024
Class: SE1940
RollNumber: HE186796
FullName: Duong Xuan Quyet
Question: 7
*/

//Import Library
#include <stdio.h>

//Main function
int main() {

// Input


// Processing

	int count = 0;

//Output
  
  int i=1;
  printf("cac so chia het cho 3 nhung khong chia het cho 5 la :");
  for(i=1;i<=100;i++){
  	if(i%3==0&&i%5!=0){
  		printf("%d ;",i);
  		count++;
	  }
  }
  printf("\n co %d so chia het cho 3 nhung khong chia het cho 5 ",count);
  
  return 0;
}
