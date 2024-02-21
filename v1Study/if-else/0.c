#include <stdio.h>

int main(){
	float mark = 0;
	scanf("%f",&mark);
	if(mark>=8) printf("gioi");
	else{
		if(mark>=6.5f) printf("kha");
		else{
			if(mark>=5) printf("trung binh");
			else {
				if(mark>=3.5f) printf("kem");
				else printf("yeu");
			}
		}
	}
	return 0;
}
