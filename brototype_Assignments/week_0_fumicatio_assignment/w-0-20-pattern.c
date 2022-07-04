#include <stdio.h>
#include <stdlib.h>

int main(){
     int counter =1;
     printf("pattern printing \n");
     for( int i =1; i<=4; i++){ // rows number is fixed to 4
          for (int j=0; j<i;j++,counter++){ // columns
               printf("%d\t",counter);
          }printf("\n\n");
     }
     return 0;

}