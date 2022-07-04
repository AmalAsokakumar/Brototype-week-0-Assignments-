//error coded re editing required after studying pointer concepts.

// pointers are actually not used in this programme 



#include <stdio.h>
#include <stdlib.h>

int* getArray (int[],int );
void displayArray(int[] ,int);




int main(){
     int size;
     printf("\n Enter the array size : ");
     scanf("%d",&size);
     int array[50];
     int *p_array = getArray(array,size); // get this pointer for the next function.
     displayArray(array, size);

     return 0;
}




int* getArray (int array[], int ar_size){
     printf("\n Enter the array elements : \n");
     for (int i=0; i < ar_size; i++){
          scanf("%d",&array[i]);
     }
    return array;
}




void displayArray(int array[],int limit){  // but i did't knew how to change the indexing value of the pointer address  

     for (int i=0; i < limit; i++){
          printf("%d\t",array[i]);
     }
}

