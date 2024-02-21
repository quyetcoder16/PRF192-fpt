#include <stdio.h>

const long long PA = 9e6;
const long long PD = 36e5;

int main(){
	long long dependent,income;
	printf("enter Your income of this month :");
	scanf("%lld",&income);
	printf("enter number of dependent : ");
	scanf("%lld",&dependent);
	double tf = 12*(PA+dependent*PD);
	double ti = income*12-tf;
	double it = 0;
	if(ti>0){
		if(ti>18e6){
			it=ti*0.2;
		}else{
			if(ti>1e7){
				it=ti*0.15;
			}else{
				if(ti>5e6){
					it = ti *0.1;
				}else{
					it = ti*0.05;
				}
			}
		}
	}else ti = 0;
	printf("Your income of this year: %lld\n",income*12);
	printf("Number of dependent: %lld\n",dependent);
	printf("Tax-free income: %lf\n",tf);
	printf("Taxable income: %lf\n",ti);
	printf("Income tax: %lf\n",it);
	return 0;
}
