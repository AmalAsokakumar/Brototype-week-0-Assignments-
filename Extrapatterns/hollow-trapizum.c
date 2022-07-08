#include<stdio.h>
#include<stdlib.h>

int main(){


//     *****
//    *   * 
//   *   *  
//  *   *   
// *****  



   int  i, j;
   int  n=5;

     for (i =1;i<=n;i++){
          for(j =1;j<2*n;j++){
           

               if ((j == (n-i)+1) || (j == (2*n-i)) || ((i ==1)&& (j>= n))|| ((i ==n)&&(j<=n)))  printf("*");
          
               else printf(" ");
          }
          printf("\n");

     }
}