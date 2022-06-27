#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void recursion(int count,char string[]){;
     if  (1 <= count){
          printf("%03d  : %s \n",count,string);
          count -= 1;
     }
     recursion(count,string);

}

int main(){
     char name[20];
     int count;
     printf("\nEnter a  String : ");
     scanf("%s",name);
     printf("\nNumber of times you wanted to repeat the above string : ");
     scanf("%d",&count);
     recursion(count,name);
     


}