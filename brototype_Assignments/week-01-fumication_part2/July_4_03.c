#include<stdio.h>
#include<stdlib.h>

int main (){
     printf("Welcome\n");

     int rows = 5;

     for(int i=5; i>=1; i--){

          for(int j=1; j<=i*3; j++){

               printf("*");

          }
          printf("\n*\n*\n");
     }
}