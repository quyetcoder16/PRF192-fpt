#include <stdio.h>

int main(){
	int code = 0;
	while(code<256){
		printf("%c, %3d, %3o, %3x\n",code,code,code,code);
		code++;
	}
	
	code =0;
	do{
		printf("%c, %3d, %3o, %3x\n",code,code,code,code);
		code++;
	}while(code<256);
	return 0;
}
