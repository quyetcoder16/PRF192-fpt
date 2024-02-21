#include <stdio.h>
#include <math.h>

int main(){
	int i;
	int n;
	scanf("%d",&n);
	long s1 = 0;
	long s2=0;
	double s3 = 1;
	for(i=1;i<=n;i++){
		if(i%2==0&&n%2==0) s1+=i;
		else if(i%2==1) s1+=i;
		s3+=1.0f/(pow(i,i-1));
	}
	for(i=n;i>0;i-=2) s2+=i;
	printf("s1 = %ld\n",s1);
	printf("s2 = %ld\n",s2);
	printf("s3 = %lf\n",s3);
	return 0;
}
