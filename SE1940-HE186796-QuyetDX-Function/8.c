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
	printf("enter ipart: ");
	scanf("%d",&ipart);
	do{
		printf("enter faction: ");
		scanf("%d",&faction);
	}while(faction<0);
	printf("%lf",makeDouble(ipart,faction));
	return 0;
}
