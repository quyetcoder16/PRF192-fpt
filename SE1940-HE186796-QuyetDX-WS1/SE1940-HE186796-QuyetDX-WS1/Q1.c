/*
Date: 15/01/2024
Class: SE1940
RollNumber: HE186796
FullName: Duong Xuan Quyet
Question: 1
*/

//Import Library
#include <stdio.h>

//Main function
int main() {

// Input


	char full_name[100], class[50], RollNumber[20], queQuan[100];
    int age;

    printf("Ban hay nhap Ho va ten : ");
    fgets(full_name, sizeof(full_name), stdin);
    full_name[strcspn(full_name, "\n")] = '\0'; 

    printf("Ban hay nhap lop hoc : ");
    scanf("%s", &class);

    printf("Ban hay nhap ma sinh vien : ");
    scanf("%s", &RollNumber);

    printf("Ban hay nhap que quan : ");
    getchar(); 
    fgets(queQuan, sizeof(queQuan), stdin);
    queQuan[strcspn(queQuan, "\n")] = '\0'; 

    printf("Ban hay nhap tuoi : ");
    scanf("%d", &age);


// Processing

 printf("Xin Chao Cac ban!\n");
    printf("Toi Ten la : %s\n", full_name);
    printf("Toi hoc lop: %s\n", class);
    printf("Ma sinh vien cua toi la : %s\n", RollNumber);
    printf("Toi den tu : %s\n", queQuan);
    printf("Nam nay toi : %d tuoi\n", age);


//Output
  
  
  return 0;
}
