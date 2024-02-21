#include <stdio.h>
#include <math.h>



int main(){
//	int a,b;
//	scanf("%d %d",&a,&b);
//	printf("tong %d + %d = %d \n",a,b,a+b);
//	printf("hieu %d - %d = %d \n",a,b,a-b);
//	printf("tich %d * %d = %d \n",a,b,a*b);
//	printf("thuong %d / %d = %0.1f \n",a,b,a*1.0f/b);

//	float r;
//	scanf("%f",&r);
//	const float PI = 3.14;
//	printf("chu vi hinh tron %0.5f \n",2*r*PI);
//	printf("Dien tich hinh tron %0.5f \n",r*r*PI);

//	int a[5];
//	int i = 0;
//	for(i=0;i<5;i++) {
//		scanf("%d",&a[i]);
//	}
//	int tong = 0;
//	int tich = 1;
//	float tbc = 0;
//	float tbn = 0;
//	for(i=0;i<5;i++){
//		tong+=a[i];
//		tich*=a[i];
//	}
//	tbc = tong / 5;
//	tbn = pow(tich,0.2f);
//	printf("tong : %d\n",tong);
//	printf("tich : %d\n",tich);
//	printf("tbc : %0.2f\n",tbc);
//	printf("tbn : %0.3f\n",tbn);


//check number is odd or even
//	int a;
//	scanf("%d",&a);
//	if(a%2==0){
//		printf("so chan");
//	}else printf("so le");

//	int cost,time;
//	printf("nhap time : ");
//	scanf("%d",&time);
//	printf("nhap cost : ");
//	scanf("%d",&cost);
//	float bonus = 0;
//	if(time>=200){
//		bonus = 0.2f * cost;
//	}else{
//		if(time >=100){
//			bonus = 0.1f * cost;
//		}
//	}
//	
//	printf("bonus is %0.2f \n",bonus);

	int a,b,c;
//	scanf("%d %d %d",&a,&b,&c);
	printf("nhap a = ");
	scanf("%d",&a);
	printf("nhap b = ");
	scanf("%d",&b);
	printf("nhap c = ");
	scanf("%d",&c);
/*	if(a==b) printf("a=b");
	else{
		if(a<b) printf("a<b");
		else {
			printf("a>b");
		}
	}*/
	printf("\n");
	int max = a;
	if(max<b) max =b;
	if(max<c) max = c;
	printf("max  = %d",max);
	
	
	return 0;
}

