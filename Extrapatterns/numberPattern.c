#include <stdio.h>
#include <stdlib.h>
int main(){

int k ;
int count = 8;
//int n=2;

for (int i = 1, k =1; i < count; i++, k++){
     for(int j = 1; j < 2*count; j++){


                         if (j <=count ){
                                    if ((j >= ((count-i)+1)) && (j <= count)) { //skelton for the pattern
                                   printf("%d",k);
                                   k+=1;
                          }  else {
                              printf(" ");
                          }
                         }
                        else if(j >=count ){        // dividing the figure in to two right angled triangle.
                              if ((j<=(count+i)-1)){
                                   k--;
                                   printf("%d",k);
                              } else {
                                   printf(" ");
                              }
                               }
                    else
                         printf ("unknown");}
               printf("\n");
}
    
}
