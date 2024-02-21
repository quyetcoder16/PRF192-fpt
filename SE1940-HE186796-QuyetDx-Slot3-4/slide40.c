//// ex1
//
//#include <stdio.h>
//
//int main() {
//    int integer1, integer2;
//    float float1, float2;
//    double double1, double2;
//    printf("Enter value for integer1: ");
//    scanf("%d", &integer1);
//    printf("Enter value for integer2: ");
//    scanf("%d", &integer2);
//    printf("Enter value for float1: ");
//    scanf("%f", &float1);
//    printf("Enter value for float2: ");
//    scanf("%f", &float2);
//    printf("Enter value for double1: ");
//    scanf("%lf", &double1);
//    printf("Enter value for double2: ");
//    scanf("%lf", &double2);
//    printf("\nValues and Addresses:\n");
//    printf("Integer1: %d, Address: %p\n", integer1, &integer1);
//    printf("Integer2: %d, Address: %p\n", integer2, &integer2);
//    printf("Float1: %.2f, Address: %p\n", float1, &float1);
//    printf("Float2: %.2f, Address: %p\n", float2, &float2);
//    printf("Double1: %.2lf, Address: %p\n", double1, &double1);
//    printf("Double2: %.2lf, Address: %p\n", double2,&double2);
//
//    return 0;
//}


//ex2

#include <stdio.h>

int main(){
	int n;
	char c;
	printf("Enter an interger:");
	scanf("%d",&n);
	getchar();
	printf("Enter a character:");
	scanf("%c",&c);
//	printf("%d%c",n,c);
	return 0;
}
