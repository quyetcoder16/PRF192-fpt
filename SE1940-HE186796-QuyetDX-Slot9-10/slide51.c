#include <stdio.h>

int gcd(int a,int b){
	while(a!=b){
		if(a>b) a-=b;
		else b-=a;
	}
	return a;
}

int lcm(int a,int b){
	return (a*b)/gcd(a,b);
}

int main(){
	int m,n,l,g;
	do{
		printf("input 2 positives interger:");
		scanf("%d%d",&m,&n);
	}while(m<=0||n<=0);
	g = gcd(m,n);
	l= lcm(m,n);
	printf("GCD: %d,LCM: %d\n",g,l);
	return 0;
}
