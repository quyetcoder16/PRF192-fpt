#include <stdio.h>

int main(){
	char names[7][31] = {
		"dinh tien hoang", "le dai hanh",
		"ly cong uan","le loi","tran nguyen han",
		"le thanh tong","nguyen hue"
	};
	int i;
	for(i=0;i<7;i++){
		printf("addr:%u, value:%s\n",&names[i],names[i]);
	}
	return 0;
}
