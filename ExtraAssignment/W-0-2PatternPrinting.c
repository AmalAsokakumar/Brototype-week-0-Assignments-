#include<stdio.h>
#include<stdlib.h>
int main (){

     int rows = 10;
     int columns = 10;
     printf ("This programs prints a pattern \n");
     for(int i=1; i<rows;i++){
          for (int j=1; j<=columns-i;j++){
               printf(" ");
          }
          for(int j=1; j<i;j++){
               printf("%d ", j);
          }printf("1 \n");
     }
}




//          1 
//         1 1 
//        1 2 1 
//       1 2 3 1 
//      1 2 3 4 1 
//     1 2 3 4 5 1 
//    1 2 3 4 5 6 1 
//   1 2 3 4 5 6 7 1 
//  1 2 3 4 5 6 7 8 1 