#include <stdio.h>
#include <stdlib.h>

int main (){
     int array[100];
     int array_size ;
     int i=0;


     printf("Enter the array size ");
     scanf("%d",&array_size);
     

     printf("Enter the array Elements ");
     for(int i=0; i<array_size; i++){
          scanf("%d",&array[i]);
     }

     while(i<array_size){

          if(array[i]%2==0 ){
               for(int j=i; j<array_size-1; j++){
                    array[j]= array[j+1];
               }
               i-=2;
               array_size-=1;}
               else{
                    i++;
               }

          
     }


     printf("The array elements are : ");

     for(int i=0; i<array_size; i++){
          printf("%d ",array[i]);
     }

     


}