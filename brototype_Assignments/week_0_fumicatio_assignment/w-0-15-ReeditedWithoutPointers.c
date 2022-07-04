#include <stdio.h>
#include <stdlib.h>

void getArray (int[],int );
void displayArray(int[] ,int);




int main(){
     int size;
     printf("\n Enter the array size : ");
     scanf("%d",&size);
     int array[50];
     getArray(array,size);
     displayArray(array, size);

     return 0;
}




     void getArray (int array[], int ar_size){
     printf("\n Enter the array elements : \n");
     for (int i=0; i < ar_size; i++){
          scanf("%d",&array[i]);
     }
}




void displayArray(int array[],int limit){

     for (int i=0; i < limit; i++){
          printf("%d\t",array[i]);
     }
}

