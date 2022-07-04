#include <stdio.h>
#include <stdlib.h>

int main(){
     int number1, number2, number3;
     int a,b,c;
     int greatest;
     printf("\nEnter three numbers : ");
     scanf("%d%d%d",&number1,&number2,&number3);
      greatest = number1 > number2 ? number1 > number3 ?  number1 : number3 : number2 > number3? number2 : number3;
     printf("%d \n",greatest);
     return 0;
}