#include <stdio.h>

int main(){
	int age;
	scanf("%d",&age);
	if(age>50){
		printf("cao nien");
	}else{
		if(age>39){
			printf("trung nien");
		}else{
			if(age>17) printf("thanh nien");
			else {
				if(age>10) printf("vi thanh nien");
				else{
					if(age>2) printf("nhi dong");
					else printf("tre so sinh");
				}
			}
		}
	}
	return 0;
}
