#include <stdio.h>

double makeDouble(int ipart,int faction){
	double d_f = faction;
	while(d_f>=1) d_f/=10;
	if(ipart<1){
		return ipart-d_f;
	}else return ipart+d_f;
}

int main(){
	int ipart,faction;
	scanf("%d %d",&ipart,&faction);
	printf("%lf",makeDouble(ipart,faction));
	return 0;
}
