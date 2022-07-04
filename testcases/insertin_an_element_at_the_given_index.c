#include <stdio.h>
#include <stdlib.h>

int main(){
     int array[100];
     int count = 0;
     int index;
     int temp;
     int value;

     printf("\nEnter the size of the array : ");
     scanf("%d", &count);

     for (int i = 0; i < count;i++) {
          printf("\nEnter the %d element : ", i);
          scanf("%d", &array[i]);
     }
     printf("\nThe Entered array elements ate : ");
     for(int i = 0; i < count ; i++) {
          printf("%d ", array[i]);
     }
     printf("Enter the postion of where you wanted to insert data : ");
     scanf("%d", &index);
     
     printf ("Enter the value that you wanted to insert : ");
     scanf("%d", &value);

     index-=1; // actual index value will be lower than one unite of entered value.
     count+=1;// one element is inserted so index value will be increased. array size

     for (int i = index; i< count;i++) {
          temp = array[i];
          array[i]= value;
          value = temp;
     }
     for (int i = 0; i < count; i++) {
          printf("%d ", array[i]);
     }
     }
