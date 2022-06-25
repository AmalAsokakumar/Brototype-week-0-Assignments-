#include <stdio.h>
#include <stdlib.h>
int main(){
     int size, count=1;
     int array_1[50], array_2[50], temp_array[50];
     printf("\n Enter the size of the arrays : ");
     scanf ("%d",&size);
     printf("\n Enter the elements of the first array \n");
     for(int i = 0; i<size;i++){
          printf("\n The %d element : ",count);
          scanf("%d",&array_1[i]);
          count ++;
     }
     count = 1;
     printf("\n\nEnter the second array ");
     for (int i =0; i <size; i++){
          printf("\n\n Enter the %d element : ",count);
          scanf ("%d",&array_2[i]);
          count ++;
     }


     printf("\n\n\tprinting the array before swapping ");


     printf("\n\nPrinting the first array  : ");
     for (int i=0; i<size; i++){
     printf("%d\t",array_1[i]);
   }

     printf("\n\nprinting the second array : ");
     for (int i=0; i<size; i++){
     printf("%d\t",array_2[i]);
     }


     printf("\n\n\tprinting the array after swapping ");

    // swapping array elements one by one 
     for ( int i =0; i < size; i++){
     temp_array[i] = array_1[i];
     array_1[i] = array_2[i];
     array_2[i] = temp_array[i];
   }
  
     printf("\n\nPrinting the first array  : ");
     for (int i=0; i<size; i++){
     printf("%d\t",array_1[i]);
   }

     printf("\n\nprinting the second array : ");
     for (int i=0; i<size; i++){
     printf("%d\t",array_2[i]);
     }

}