#include <stdio.h>
#include <stdlib.h>

int* getArray (int[],int );
void displayArray (int, int);



int main(){
     int size;
     printf("\n Enter the array size : ");
     scanf("%d",&size);
     int array[50];
     int *p_array = getArray(array,size);
     displayArray(*p_array, size);
     return 0;
}




int* getArray (int array[], int ar_size){
     printf("\n Enter the array elements : \n");
     for (int i=0; i < ar_size; i++){
          scanf("%d",&array[i]);
     }
    return array;
}



void displayArray(int array_p,int limit){

     //int array[50];
     for (int i=0; i < limit; i++){
          printf("%d\t",(array_p+i));
     }
    
}
