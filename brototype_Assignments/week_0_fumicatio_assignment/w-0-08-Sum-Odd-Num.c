#include <stdio.h>
#include <stdlib.h>

int main(){
     int limit, sum=0;
     printf("This programme prints the sum of odd numbers \nEnter the limit : ");
     scanf("%d",&limit);
     for (int i=1; i < limit; i++){
         if (i%2 != 0){
         sum+=i;
         } 
     }
     printf("\nThe sum of the odd numbers are %d \n ", sum);
     
     return 0;
}