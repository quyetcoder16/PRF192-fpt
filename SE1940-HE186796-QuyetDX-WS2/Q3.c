/*
Date: 17/1/2024
Class: SE1940
RollNumber:HE186796
FullName:Duong Xuan Quyet
Question: 3
*/

//Import Library
#include <stdio.h>


// DEFINE 1 NAM = 365 NGAY, 1 Thang = 30 NGAY 

const long GIAY_NAM = 365*24*60*60;
const long GIAY_THANG = 30*24*60*60;
const long GIAY_NGAY = 24*60*60;
const long GIAY_GIO = 60*60;
const long GIAY_PHUT =60;
	
void solve(long long giay){
	printf("%lld nam, ",giay/GIAY_NAM);
	giay-=(giay/GIAY_NAM)*GIAY_NAM;
	printf("%lld thang, ",giay/GIAY_THANG);
	giay -= (giay/GIAY_THANG)*GIAY_THANG;
	printf("%lld ngay, ",giay/GIAY_NGAY);
	giay -= (giay/GIAY_NGAY)*GIAY_NGAY;
	printf("%lld gio, ",giay/GIAY_GIO);
	giay -= (giay/GIAY_GIO)*GIAY_GIO;
	printf("%lld phut, ",giay/GIAY_PHUT);
	giay -= (giay/GIAY_PHUT)*GIAY_PHUT;
	printf("%lld giay.\n",giay);
	 
}

//Main function
int main() {

// Input

	long long giay=0;
	printf("Nhap so giay = ");
	scanf("%lld",&giay);


// Processing


//Output
  
  solve(giay);
  
  return 0;
}
