#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
     char array[20];
     int length ;
     int count=1;
     printf("Enter a string to check : ");
     scanf("%s",array);
     int visited = -1;
     char index_array[20];
     char most_reap;
     char least_reap = 0;
     int least_index = 0;
     int most_index = 0;

// finding the characters that are repeating in the array 
     for(int i=0;i<strlen(array); i++) {
          count=0;
          for (int j=i+1;j<strlen(array); j++) {
               
               if ((array[i]== array[j])&&(array[j]!=visited)) {
                    count++;
                    index_array[j]=visited;
               }
          }
          if (index_array[i]!= visited){          // saving the count on the first character in the array 
               index_array[i]=count;
          }
     }



     // for(int i=0;i<strlen(array); i++) {
     //      printf (" printing the visited array elements : %d\n",index_array[i]);
     // }




     for (int i=0;i<strlen(array);++i) {   // finding the largest and smallest count from the array
          if ((most_index< index_array[i])&&(index_array[i] > 0)){
     most_reap = index_array[i];
     //printf("the most repeated index : - %d ", index_array[i]);
          }
          if ((least_index > index_array[i])&&(index_array[i] > 0)){
     least_reap = index_array[i];
    // printf("the least repeated index : - %d ", index_array[i]);

          }
}



     printf("\nThe most repeated elements are : \n");
     for(int i=0;i<strlen(array);i++) {
          if (most_reap==index_array[i] ){ // for printing the most repeated character in the array 
               printf("%c\n",array[i]);
          }

     }


     printf("\nThe least repeating elements in the array : \n");
     for(int i=0;i<strlen(array);i++) {
          if ((least_reap==index_array[i])&& (index_array[i] >=0)){ // for printing the least repeating element in the array.
               printf("%c\n",array[i]);
          }
          
          }

   


}