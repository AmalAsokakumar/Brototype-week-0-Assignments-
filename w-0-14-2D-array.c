#include <stdio.h>
#include <stdlib.h>

int main (){
     int array_1[50], array_2[50], array_sum[50];
     int size;
     printf("\n Enter the size of the array : ");
     scanf("%d",&size);

     //first array elements added 
     printf("Enter the first array elements ; \n");
     for (int i=0; i<size; i++){
           scanf("%d",&array_1[i]);
     }
     //second array elements added 
     printf("\n Enter the second array : \n");
     for (int i=0; i<size ; i++){
          scanf("%d",&array_2[i]);
     }
     //sum of three arrays 
     for (int i=0; i < size;i++){
          array_sum[i]= array_1[i] + array_2[i];

     }
     printf("\n\n The first array elements are  : ");
     for (int i=0;i<size;i++ ){
          printf("%d\t",array_1[i]);
     }

     printf("\n\n The second array elements are : ");
     for (int i=0;i<size;i++ ){
          printf("%d\t",array_2[i]);
     }

     printf("\n\n The sum of array elements are : ");
     for (int i=0;i<size;i++ ){
          printf("%d\t",array_sum[i]);
     }


}