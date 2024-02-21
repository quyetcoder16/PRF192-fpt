#include <stdio.h>

int main(){
	int code = 0;
	for(code=0;code<256;code++){
		printf("%c, %3d, %3o, %3x\n",code,code,code,code);
	}
	return 0;
}
