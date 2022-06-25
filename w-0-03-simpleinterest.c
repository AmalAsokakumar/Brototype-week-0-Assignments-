#include <stdio.h>
#include <stdlib.h>

int main(){
     int pr_amount;
     float rate_interest, no_years, s_interest;
     printf(" Enter the principal amount : ");
     scanf ("%d",&pr_amount);
     printf("Enter the number of years : ");
     scanf ("%f",&no_years);
     printf("Enter the rate of interest : ");
     scanf("%f",&rate_interest);
     s_interest = (pr_amount * no_years * rate_interest )/100;  // basic equation to find the simple interest.
     printf("Simple interest is = %f \n",s_interest);
     return 0;
}