#include <stdio.h>
#include <math.h>

int isVowel(int c){
	return (c=='a'||c=='A'||c=='E'||c=='e'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U');
}

int sumDivisors(int n){
	int s=0,i;
	for(i=1;i<=n/2;i++)
		if(n%i==0) s+=i;
	return s;
}

int isPrime(int n){
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int menu(){
	int c;
	printf("\n1- test vowel for a character");
	printf("\n2- sum of divisors");
	printf("\n3- test prime for an integer");
	printf("\nOthers: quit");
	printf("\nplease choose:");
	scanf("%d",&c);
	return c;
}

int main(){
	int choice;
	int n;
	char c;
	do{
		choice = menu();
		switch(choice){
			case 1:{
				printf("enter one character:");
				fflush(stdin);
				c = getchar();
				if(isVowel(c)){
					printf("it is a vowel\n");
				}else printf("it is not a vowel\n");
				break;
			}
			case 2:{
				do{
					printf("input a positive integer:");
					scanf("%d",&n);
				}while (n<=0);
				printf("sum of it's divisors:%d\n",sumDivisors(n));
				break;
			}
			case 3:{
				printf("input an integer:");
				scanf("%d",&n);
				if(isPrime(n)){
					printf("it is a prime!\n");
				}else printf("it is not a prime!\n");
				break;
			}
			default:{
				printf("good bye!");
				break;
			}
		}
	}while(choice>=1&&choice<4);
}
