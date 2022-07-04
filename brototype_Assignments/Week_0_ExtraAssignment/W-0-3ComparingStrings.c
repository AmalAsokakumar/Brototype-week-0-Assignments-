#include<stdio.h>
#include<stdlib.h>


int stringLength(char str[]){
     int count = 0;
     for(int i = 0; str[i] != '\0'; i++ ,count ++);
     return count ;
}


int comparingStrings(char str1[], char str2[], int str1_len, int str2_len) {
     int flag = 0;
     if (str1_len == str2_len){
          for(int i=0;i<str1_len;i++){

               if(str1[i] != str2[i]){
                    flag = 1;
                    break;
               }

          } 
          return flag;
     } else {
          return 3;
     }
}



int main(){
     char string1[20];
     char string2[20];

     printf("\n\nEnter The First String  : ");
     scanf("%s",string1);
     printf("\nEnter The Second String : ");
     scanf("%s",string2);
     int string1_length = stringLength(string1);
     int string2_length = stringLength(string2);


     int returnValue = comparingStrings(string1,string2,string1_length,string2_length);

     if (returnValue == 3){
          printf("\nString length doesn't Match \n\n");
     }else if (returnValue ==1){
          printf("\nString A :%s\n  \t\t\tdoesn't Match \nstring B:%s\n\n", string1, string2);
     }else {
          printf("\nString A :%s\n  \t\t\tMatches \nstring B:%s\n\n", string1, string2);
     }



}