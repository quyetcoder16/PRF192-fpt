#include <stdio.h>
#include <ctype.h>
 
int main(){
    char ch = "";
    int nVowels = 0,nConsonants = 0,nOthers = 0;
    do{
        ch = getchar();
        ch = toupper(ch);
        if(ch>='A' && ch<='Z'){
            switch(ch){
                case 'A':
                case 'E':
                case 'U':
                case 'I':
                case 'O':{
                    nVowels++;
                    break;
                }
                default:{
                    nConsonants++;
                    break;
                }
            }
        }else {
            nOthers++;
        }
    }while(ch!='\n');
    printf("nVowels = %d \n",nVowels);
    printf("nConsonants = %d \n",nConsonants);
    printf("nOthers = %d \n",nOthers-1);
    return 0;
}
