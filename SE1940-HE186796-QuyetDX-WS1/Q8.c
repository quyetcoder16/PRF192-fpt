/*
Date: 15/01/2024
Class: SE1940
RollNumber: HE186796
FullName: Duong Xuan Quyet
Question: 8
*/

//Import Library
#include <stdio.h>

void printMenu(){
	printf("==============Menu=========\n");
	printf("1.lua chon ga ran \n");
	printf("2.lua chon khoai tay chien\n");
	printf("3.lua chon my y\n");
	printf("4.lua chon Hamburger.\n");
	printf("5.lua chon Pizza.\n");
	printf("6.Thoat\n");
	printf("===============================\n");
	printf("nhap lua chon:");
}

//Main function
int main() {

// Input

	int c=0;
	

// Processing
	
	do{
	printMenu();
	printf("nhap lua chon:");
		scanf("%d",&c);
		switch(c){
			case 1:{
				printf("ban chon ga ran\n");
				break;
			}
			case 2:{
				printf("ban chon khoai tay chien\n");
				break;
			}
			case 3:{
				printf("ban chon my y\n");
				break;
			}
			case 4:{
				printf("ban chon Hamburger\n");
				break;
			}
			case 5:{
				printf("ban chon Pizza\n");
				break;
			}
			case 6:{
				printf("thoat!!!!\n");
				break;
			}
			default:{
				printf("vui long nhap tu 1 -> 6\n");
				break;
			}
		}
	}while(c!=6);

//Output
  
  
  return 0;
}
