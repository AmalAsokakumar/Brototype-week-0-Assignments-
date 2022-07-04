#include<stdio.h>
#include<stdlib.h>

int main(){
     int number;
     int var_1;
     int result=0;
     int temp;
     printf("Enter a 3 digit number : ");
     scanf("%d",&number);
     temp = number;
     while(number>0){
          var_1 = number%10;
          number/=10;
          result+=var_1*var_1*var_1;
     }
     if (result == temp)
          printf("%d is an Armstrong Number \n",result);
     else printf("%d is not an Armstrong Number \n", temp);
     
}
