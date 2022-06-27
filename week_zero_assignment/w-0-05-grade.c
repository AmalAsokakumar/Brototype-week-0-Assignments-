#include <stdio.h>
#include <stdlib.h>

int main(){
     float perc_mark;
     printf("\nEnter your mark in percentage : ");
     scanf("%f",&perc_mark);
     if (perc_mark > 90){
          printf("\n Grade A\n ");
     }else if (perc_mark >80 ){
          printf("\n Grade B\n");
     }else if (perc_mark > 70){
          printf("\n Grade C\n");
     }else if(perc_mark > 60){
          printf("\n Grade D\n");
     }else if(perc_mark > 50){
          printf("\n Grade E\n");
     }else {
          printf("\n Failed\n");
     }
     return 0;
     
}