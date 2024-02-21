#include <stdio.h>

int main(){
	
  char ch;
  printf("\nNhap vao mot ky tu (A-Z hoac a-z): ");
  ch=getchar();
  if(ch<'A' || ch>'z'){
    printf("\nKy tu nhap vao '%c' khong nam trong bang chu cai tieng Anh!",ch);
  }else{
    switch(ch){
      case 'a':
      case 'A':
      case 'e':
      case 'E':
      case 'i':
      case 'I':
      case 'o':
      case 'O':
      case 'u':
      case 'U':
        printf("\n'%c' la nguyen am!",ch);
        break;
      default:
        printf("\n'%c' la phu am!",ch);
	}
}

}
