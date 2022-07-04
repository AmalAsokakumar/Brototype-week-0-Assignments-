#include <stdio.h>
#include <stdlib.h>

int main(){
     int len;
     char str[20];
     printf("Enter the number of rows to print : ");
     scanf("%d",&len);
     for(int i=1; i<=len;i++){
          printf("\n*\n*\n");  
          for(int j=0; j<i*3;j++)  {
               printf("*");
          }
     }
     printf("\n");

}