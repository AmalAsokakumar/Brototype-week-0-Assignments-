#include <stdio.h>
#include <stdlib.h>

int main(){
     int array[100];
     int count =0;
     int i, delPos;

     printf("Enter the size of array elements : ");
     scanf("%d", &count);
     for(i = 0; i<count ; i++){
          printf("Enter the element %d : ", i);
          scanf("%d", &array[i]);
//      }
//     for (i =0; i<count; i++){
//           if (0 > array[i] ){
//                for(int j = i; j < count-1; j++){
//                     array[j]= array[j+1];
//                }
//                i--;
//                count-=1;
//           }
//           i++;
//      }
//       for (int i=0; i<count; i++){
//           printf("%d ",array[i]);
//       }

     printf(" enter delete position ");
     scanf("%d", &delPos);

     for (int i=delPos -1 ; i<count-1; i++){

     }

     array[i]=array[i+1];     }