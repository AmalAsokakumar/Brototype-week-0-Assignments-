#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int Str_len (char str[]){
    int i;
    for(i=0;str[i]!='\0';i++){  // total length incudes the null character.
        
    }
         // printf("%d\n",i);
          return i;
     
}


void getString( char array[]){
printf("Enter a string  : ");
scanf("%s",array);
}

void displayString(int string_length){
     printf("The string length is : %d \n\n",string_length);

}

int main(){
char tmp;
char string[20];
char string2[20];
int str_length1;
int choice;
int flag=0;
int i;
while(1){
printf("\n 1 String length \n 2 String Concatenation \n 3 String Reverse \n 4 Quit \n\nEnter a choice  :  ");
scanf("%d",&choice);

switch (choice){
     case 1 :
               getString(string);
               str_length1= Str_len(string);
               displayString(str_length1);
               break;
     case 2 :
                getString(string);
                getString(string2);
                str_length1 = Str_len(string);
                for (int i=0;string[i]!='\0';i++, str_length1++){              // to skips the null character < is used 
                    string[str_length1] = string2[i];}
                printf("The concatenated string is %s ",string);
                break;
     case 3 :       
               // reverse string 
                getString(string);
                str_length1=Str_len(string)-1;         //sting length -1 is used because in includes the count of null character.
                for (i=0;i<=str_length1/2;i++,str_length1--){
                    tmp = string[i];
                    string[i]=string[str_length1];
                    string[str_length1]=tmp;
                }
                printf("The reverse string is : %s  ",string);
               

     case 4 :
                printf("End of the programme ");
                flag= 1;
                break;
     default :
                   printf("Please re-enter a valid choice ");
}
if (flag==1)
     break;

 }
 return 0;
}
     
