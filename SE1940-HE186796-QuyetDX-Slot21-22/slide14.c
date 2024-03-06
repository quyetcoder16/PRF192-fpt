//#include <stdio.h>
//#include <string.h>
//#include <conio.h>
//
//int main(){
//	int n = 10;
//	char s[11] = "hello";
//	int m = 9;
//	printf("n = %d, s = %s,m=%d\n",n,s,m);
//	scanf("%s",s);
//	printf("n=%d, s=%s,m=%d\n",n,s,m);
//	return 0;
//}

#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(){
	int n = 10;
	char s[11] = "hello";
	int m = 9;
//	printf("n = %d, s = %s,m=%d\n",n,s,m);
//	scanf("%10[^\n]",s);
	scanf("%[^\n]", s);
	printf("n=%d, s=%s,m=%d\n",n,s,m);
	return 0;
}
