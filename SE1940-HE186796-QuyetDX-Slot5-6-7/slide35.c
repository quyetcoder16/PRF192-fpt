//#include <stdio.h>
//
//int main(){
//	int s = 0;
//	int i;
//	for(i=0;i<5;i++){
//		if(i%2==1) continue;
//		s+=i;
//	}
//	printf("\ns = %d",s);
//	return 0;
//}

#include <stdio.h>

int main(){
	int s = 0;
	int i;
	for(i=0;i<5;i++){
		if(i%2==0) s+=i;
	}
	printf("\ns = %d",s);
	return 0;
}
