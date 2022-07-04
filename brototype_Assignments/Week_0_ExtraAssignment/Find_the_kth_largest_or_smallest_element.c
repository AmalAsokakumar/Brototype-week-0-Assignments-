# include<stdio.h>
# include<stdlib.h>

int main(){

     int i;
     int array_length;
     int array[50];
     int k_element;

     printf("Enter the size of array : ");
     scanf("%d", &array_length);

     printf("Enter the array elements : ");
     for (int i = 0; i < array_length; i++){
     scanf("%d", &array[i]);
     }



     printf("\nlargest \nwhich k th element : ");
     scanf("%d", &k_element);

     // deleting the duplicate elements from the arrary.


     for (int i = 0; i < array_length; i++){
          for( int j= i+1; j < array_length; j++){

               if(array[i]== array[j]){
                    for(int k = j; k <array_length -1; k++){
                         array[k] = array[k+1];
                    }
                    array_length-=1;
                    j--;
               }

          }
          
     }

     // printf("\n the current array length is :%d ", array_length); // for printing the current array length and elements 
     // for(int i =0; i < array_length; i++){
     //      printf("%d\n",array[i]);}


     // sorting the array elements in ascending order

     for (int i = 0; i < array_length; i++) {
          for (int j = i+1; j < array_length ; j++){
               if (array[i] > array[j]){
                    array[i] += array[j];
                    array[j] = array[i]-array[j];
                    array[i] = array[i] -array[j];
               }
          }
     }

if (k_element < array_length){
printf("The  k th element is %d", k_element, array[k_element -1 ]);} // actual value will be in this n-1 location. 






}