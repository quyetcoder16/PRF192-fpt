#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(){
	char s1[21];
	char s2[21];
	printf("enter string s1:");
	gets(s1);
	printf("enter string s2: ");
	gets(s2);
	printf("lengths of s1: %d, s2: %d\n",strlen(s1),strlen(s2));
	printf("compare s1 with s2: %d\n",strcmp(s1,s2));
	strupr(s1);
	printf("uppercase s1 :%s\n",s1);
	strcat(s1,s2);
	printf("after append s2 to s1:%s\n",s1);
	char s3[10];
	printf("enter sub-string of s1:");
	gets(s3);
	char* ptr = strstr(s1,s3);
	printf("Address of s1: %u\n",s1);
	printf("Address of s3: %u\n",s3);
	printf("Address of substring: %u\n",ptr);
	return 0;
}
