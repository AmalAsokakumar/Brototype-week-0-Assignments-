#include <stdio.h>
#include <stdlib.h>

int main(){
     int i, j, n = 5;
     int r;
     int c;
     printf("Enter a number: ");
     scanf("%d", &n);
     for (i = 1, c =n; i < 2*n; i++, c--) // c  count to to create outer layer
     {
         if(i <=n)
         {
          r = n;
          }
          else 
          { 
               r= n;
               int  r_p =i-n;
          }

          int  r_p =c; // for printing the third section.
          
          for(j = 1; j < 2*n; j++)
          {
               if (i<=n){
                    if(j<=i)
                    {
                         printf("%d ",r);//first half i==n
                         r--;          //
                    }
                    else if((j<=2*n-i)&&(j>=i))
                    {
                              printf("%d ",c);// second half j<=2n-i     
                    }
                    else
                    {
                              r_p++;
                              printf("%d ",r_p); // third half
                    }

               }
               else // second part of the square.
               {
                   //printf("*");
                    if(j<(n-((i-n)))){
                         printf("%d ",r); //
                         r--;
                    }
                    else if(j<=i){
                         if(j<=n){
                              printf("%d ",r); //
                         }
                         else
                         {
                              printf("%d ",r); //
                         }
                         {}
                    }
                    else
                    {    
                         r++;
                         printf("%d ",r);
                    }
               }

          }
          printf("\n");
     }
}
