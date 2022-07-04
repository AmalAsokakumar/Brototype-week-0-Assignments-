#include <stdio.h>
#include <stdlib.h>

int main (){
     printf ("This is a pattern printing programming \n");
     for (int i =1; i <6; i++){
          for (int j =1;j <=i;j++){
               printf("%d",j);
          }
          printf("\n");
     }
}