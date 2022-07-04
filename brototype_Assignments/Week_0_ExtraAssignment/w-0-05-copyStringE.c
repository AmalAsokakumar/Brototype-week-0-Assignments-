#include <stdio.h>
#include <stdlib.h>

int main(){

     char string[20];
     char string_copy[20];
     printf("\nEnter a string  : ");
     scanf("%s",string);
     for(int i=0;string[i]!='\0';i++) {
          string_copy[i]=string[i];
     }
     printf("\nThe copied string is %s \n",string_copy);
     return 0;
}
