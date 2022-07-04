#include <stdio.h>
#include <stdlib.h>

int main (){
     int array[100], index_array[100];
     int size;
     int visited = -1;
     int count = 0;
     printf("Enter the array limit : ");
     scanf("%d", &size);

     for (int i=0;i<size;i++) {  // getting array elements from the user 
     printf("Enter %d array elements ", i);
     scanf("%d", &array[i]);
     }

     
     for (int i=0;i<size;i++) { // getting array elements one by one from the array and indexing it .
               count=0;
           for(int j=i+1; j<size;j++) { // selecting one array element from the array
                if (array[i]==array[j]){
                    index_array[j] = visited; // marking the repeated elements with -1 index 
                     count+=1;
                              }
                    }

                    if (index_array[i]!=visited){  // adding repetition count to the first element
                         index_array[i]=count;
                    }
               }

               
      for (int i=0; i<size; i++) { // printing the repeated array elements

          if (index_array[i]!=visited){ // eliminating the repeated elements
                printf("\n%d repeats %d times \n",array[i],index_array[i]);

     }

     }
}