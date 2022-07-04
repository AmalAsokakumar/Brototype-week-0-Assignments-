#include <stdio.h>
#include <stdlib.h>

int main (){
     int array_1[50][50], array_2[50][50], array_sum[50][50];
     int size;
     printf("\n Enter the size of the array : ");
     scanf("%d",&size);

     //first array elements added 
     printf("Enter the first array elements ; \n");
     for (int i=0; i<size; i++){
          for (int j=0; j<size; j++){
           scanf("%d",&array_1[i][j]);
          }
     }
     //second array elements added 
     printf("\n Enter the second array : \n");
     for (int i=0; i<size ; i++){
          for(int j=0;j<size;j++){
          scanf("%d",&array_2[i][j]);
          }
     }
     //sum of three arrays 
     for (int i=0; i < size;i++){
          for (int j=0; j<size;j++){
          array_sum[i][j]= array_1[i][j] + array_2[i][j];
          }
     }
     printf("\n\n The first array elements are  : \n");
     for (int i=0;i<size;i++ ){
          for (int j=0; j<size;j++){
          printf("%d\t",array_1[i][j]);
          }
          printf("\n");
     }



     printf("\n\n The Second array elements are  : \n");
     for (int i=0;i<size;i++ ){
          for (int j=0; j<size;j++){
          printf("%d\t",array_2[i][j]);
          }
          printf("\n");
     }


          printf("\n\n The sum of array elements are  : \n");
     for (int i=0;i<size;i++ ){
          for (int j=0; j<size;j++){
          printf("%d\t",array_sum[i][j]);
          }
          printf("\n");

     }
}