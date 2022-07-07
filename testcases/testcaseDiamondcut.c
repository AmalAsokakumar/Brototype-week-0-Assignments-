#include <stdio.h>
#include<stdlib.h>

int main(){
    
    
    int count =5;
    int i,j;

     for (int i=1; i<2*count; i++){
          for( int j=1; j<2*count; j++){
                if (i<=count){
                    if((j >=(count-i) +1) && (j <= (count +i) -1)){
                         printf("*");
                    }else printf(" ");
                }else{
                    if ((j >= (i-count)+1) && (j<= ((2*count)-(i-count)-1))){
                         printf("*");
                    } else printf(" ");
                    }
          }
          printf("\n");
     }
  
}
