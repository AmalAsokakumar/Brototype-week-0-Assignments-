#include <stdio.h>
#include <stdlib.h>

int main(){

     int i;
     int array[50];
     int visited = -1;
     int index_array[50];
     int length;
     int n_number;
     int n_minus;
     int ignored_index;

     printf("Enter the size of the array : "); // enter the array size form the user
     scanf("%d",&length);


     printf("\nEnter the array elements :\n"); // getting the array elements 
     for (i=0; i<length; i++) {
          scanf("%d",&array[i]);
     }


     n_number =array[0];
     n_minus =array[0];

for(int i=0; i<length; i++) {

     for(int j=i+1; j<length; j++) {
          if (array[i] > array[j]){ // bubble sorting 
               n_minus = n_number;
               n_number = array[i];
          }
          if (array[i])
     
     }

     }

}