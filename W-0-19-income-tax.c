#include <stdio.h>
#include <stdlib.h>

int main(){
     int income;    
     printf("\nEnter your annual income : ");
     scanf("%d",&income);
     if (income < 250000){ printf("\n\tYou don't need to pay income tax");

     }else if((income >= 250000)  && (income <= 500000))  {printf("\nThe income tax amount is  %f \n",income*.05);

     }else if((income >= 500000)  && (income <= 1000000)) {printf("\nThe income tax amount is %f \n",income*.2);

     }else if((income >= 1000000) && (income <= 5000000)) {printf("\nThe income tax amount is %f \n",income*.3);

     }else {printf("\n\tThe income tax amount unknown "); }
}