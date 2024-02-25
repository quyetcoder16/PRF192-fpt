#include<stdio.h>

 

int calculate(int c)

{      c = c + 15;

      if(c>=45)

            return(10);

      else

            return(10*10);

}

 

int main()

{        
char *ptr;
char myString[] = "abcdefg"; ptr = myString;
ptr += 5;
printf("%s",ptr);
      return(0);

}
