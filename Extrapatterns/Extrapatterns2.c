#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
     printf("Enter a string");
     char str[20];
     scanf("%s",str);
     int len = strlen(str);
     len = strlen(str);

     for (int i=0; i<len; i++){
          for(int j=0; j<=len-i; j++){
               printf("%c",str[j]);
          }
          printf("\n");
     }
}