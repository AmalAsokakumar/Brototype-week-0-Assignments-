#include <stdio.h>
#include <stdlib.h>

int main(){
     int array[50];
     int size, count=1, temp ;
     printf ("\n Enter the size of the array : ");
     scanf("%d",&size);
     for (int i=0; i<size;i++){ // getting elements into the array.
          printf("\n Enter the array element %d : ",count);
          scanf("%d",&array[i]);
          count++;

     }
     printf("\n The array for sorting is : ");
     for (int i=0; i<size; i++){
          printf("\t%d",array[i]);
     }

     for (int i=0; i<size; i++) { // array sorting in Descending Order
          for (int j=i+1; j<size; j++) {
              if  (array[i] < array[j]){
               temp = array[i];
               array[i]= array[j];
               array[j]= temp;
              }

          }      

     }

     printf("\n The sorted array is : \t");
     for (int i=0; i<size; i++){
          printf("\t%d",array[i]);
     }
     printf("\n");

}