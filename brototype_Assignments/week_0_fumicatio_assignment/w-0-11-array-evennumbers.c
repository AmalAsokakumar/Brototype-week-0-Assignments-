#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
     int array_sz, even_nums=0,count=1;
     int array[50];
     printf("\n Enter the size of the array : ");
     scanf("%d",&array_sz);
     //printf("Enter the array elements ");
     for( int i= 0; i<array_sz; i++){
          printf("\n Enter the %d element : ",count);
          scanf("%d",&array[i]);
         // scanf("%s",array[i]);// this condition kept failing "Format specifies type 'char *' but the argument has type 'int' "; have to resolve this issue.
          count ++;
     }
     for (int i=0; i<= array_sz;i++){
          if (array[i] % 2 == 0){
               //printf("%d",i);
               even_nums+=1; 
          }
     }
     if (even_nums > 0 ){
          printf ("\nNumber of even numbers in the given array is %d\n",even_nums);
     }
     return 0;
}