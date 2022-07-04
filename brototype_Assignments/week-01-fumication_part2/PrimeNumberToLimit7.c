#include <string.h>
#include <stdio.h>

int main(){
     int limit =0;
     int flag =0;
     printf("Enter the limit up to which you want the prime number : ");
     scanf("%d",&limit);
     printf("\n 2 is a prime number.");
     for(int i=3; i<=limit; i++){
         flag =0;
         //printf("\nthe count of limit counter %d",i);
          for(int j=2; j<=(i/2); j++){
               if (i%j==0){
                   //printf("if loop senario encountered for %d", i);
                    flag=1;
                    break;
               }
          } if (flag== 0){
              printf("\n %d is a prime number.", i);
              
          }
     }
    
    
    
    
}
