//#include <stdio.h>
//
//int main(){
//	int s=0,i=0;
//	goto RUN;
//	printf("\nhello-1\n");
//	printf("\nhello-2\n");
//	printf("\nhello-3\n");
//	RUN:
//		printf("%d\n",s);
//	return 0;
//}


#include <stdio.h>

int main(){
	int s=0,s2=100,i=0;
	goto RUN_2;
	RUN_1:
		if(i==0){
			printf("\nhello-1\n");
			printf("\nhello-2\n");
			printf("\nhello-3\n");
		}
		RUN_2:
			printf("%d\n",s2);
			goto RUN_1;
}
