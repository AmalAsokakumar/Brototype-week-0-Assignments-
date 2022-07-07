#include <stdio.h>
#include <stdlib.h>

int main (){
     int count = 5;
     int k;

     for(int i = 1; i < 2*count; i++){ // total number of times first loop runs < number of columns * 2 -1 
               k=1;
          for(int j = 1; j < count+i; j++) {
               if (i<=count){

                                   if (j>=((count -i) +1)){ // top half of the pyramid
                                        printf("%d",k);
                                        k++;
                                   }else printf( " ");


               }else {
                                   if(j>=((i-count) +1)&&(j< (((2*count)-(i-count))))) // in second half we need to find the starting and ending index of pattern
                                   { 
                                        printf("%d",k);
                                        k++;
                                   } else printf(" ");
               }
          }
          printf("\n");               // common spacing for two part.
     }
}



//     1
//    123
//   12345
//  1234567
// 123456789
//  1234567  
//   12345    
//    123      
//     1  