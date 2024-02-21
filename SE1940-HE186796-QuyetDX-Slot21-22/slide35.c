#include <stdio.h>

void print(char list[][31],int n){
	int i;
	for(i=0;i<n;i++){
		puts(list[i]);
	}
}

int main(){
	char names[7][31] = {
		"dinh tien hoang", "le dai hanh",
		"ly cong uan","le loi","tran nguyen han",
		"le thanh tong","nguyen hue"
	};
	print(names,7);
	return 0;
}
