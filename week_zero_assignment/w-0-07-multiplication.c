# include <stdio.h>
#include <stdlib.h>
 int main(){
     int number;
     printf("\n This programme is to print the multiplication table of the given number \n");
     printf("\n Enter the number : ");
     scanf("%d",&number);
     for (int i =1;i<11; i++){
          printf("%d * %d = %d \n",i,number,i*number);
     }
     return 0;
 }