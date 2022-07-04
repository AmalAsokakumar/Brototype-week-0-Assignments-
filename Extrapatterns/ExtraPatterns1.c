#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
     char str[20];
     printf("Enter a string : ");
     scanf("%s",str);
     int len = strlen(str);
     for (int i=0; i<len; i++){
          for(int j=0; j<=i;j++){
               printf("%c",str[j]);
          }
          printf("\n");

     }
}