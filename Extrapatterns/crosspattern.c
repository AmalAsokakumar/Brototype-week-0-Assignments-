#include <stdio.h>
#include <string.h>
#include <string.h>

int main(){
     int i,j,count=5;
     int n=count;

     for(i=1;i<2*n;i++){
          for(int j=1;j<2*n;j++){
              
              if ((i==n)||(j==n)) printf("*");
              else printf(" ");
               }
               printf("\n");
     }
}
//     *    
//     *    
//     *    
//     *    
// *********
//     *    
//     *    
//     *    
//     *   