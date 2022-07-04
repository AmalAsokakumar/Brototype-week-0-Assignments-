#include <stdio.h>
#include <stdlib.h>

int main (){
     int array[50];
     int array_sz,sum[50];
     printf("\n Enter the size of the array : ");
     scanf("%d",&array_sz);
     // getting the array elements 
     for (int i=0;i<array_sz;i++){
          printf("\n Enter the array elements %d : ",i);
          scanf("%d",&array[i]);
     }
     // summing the adjacent array elements 
     for (int i=0; i<array_sz-1; i++){
          sum[i]=array[i]*array[i+1];
     }
     printf("\n The summed array elements are : ");
     for (int i=0; i<array_sz-1; i++){
          printf(" \t%d", sum[i]);
     }
     printf("\n\n");
}