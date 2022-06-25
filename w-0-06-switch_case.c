#include <stdio.h>
#include <stdlib.h>

int main(){
     int choice;
     printf ("Enter a number in between 1 - 7 : ");
     scanf ("%d",&choice);
     switch (choice){
          case 1 : printf("\n Sunday \n"); break;
          case 2 : printf("\n Monday \n "); break;
          case 3 : printf("\n Tuesday \n"); break;
          case 4 : printf("\n Wednesday \n"); break;
          case 5 : printf("\n Thursday \n"); break;
          case 6 : printf("\n Friday \n"); break;
          case 7 : printf("\n Saturday \n"); break;
          default : printf("\n Invalid Input \n");
     }
     return 0;
}