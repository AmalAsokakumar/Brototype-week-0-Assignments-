#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
     char array[50];
     int len, flag=0;
     printf("\n To check whether it is a palindrome or not");
     printf("\n Enter the string : ");
     scanf("%s",array);
     len = strlen(array);
     for (int i=0,j=len-1; i<(len/2); i++,j--){
          //printf("%c %c",array[i],array[j]);
          if (array[i]!=array[j]){
               flag = 1;
               break;
          }
     }
     if (flag==1){
          printf("%s is not a palindrome\n",array);
     }else {
          printf("The string %s is a palindrome\n",array);
     }
}