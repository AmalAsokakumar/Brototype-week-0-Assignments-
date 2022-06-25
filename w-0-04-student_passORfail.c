#include <stdio.h>
#include <stdlib.h>

int main(){
     float marks;
     printf ("\nEnter your mark : ");
     scanf ("%f",&marks);
     if (marks >= 50){
          printf("You have passed the exam\n");
     }else{
          printf("You have failed \n ");
     }
     return 0;
}
