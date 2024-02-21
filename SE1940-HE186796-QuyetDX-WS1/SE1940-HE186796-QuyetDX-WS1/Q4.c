/*
Date: 15/01/2024
Class: SE1940
RollNumber: HE186796
FullName: Duong Xuan Quyet
Question: 4
*/

//Import Library
#include <stdio.h>

//Main function
int main() {

// Input
	
    float a, b;

    
    printf("Nhap a: ");
    scanf("%f", &a);

    printf("Nhap b: ");
    scanf("%f", &b);

   
// Processing


//Output

	if (a != 0) {
        float x = -b / a;
        printf("Nghiem cua phuong trinh %fx + %f = 0 la: x = %f\n", a, b, x);
    } else {
        if (b == 0) {
            printf("Phuong trinh co vo so nghiem.\n");
        } else {
            printf("Phuong trinh vo nghiem.\n");
        }
    }

  
  return 0;
}
