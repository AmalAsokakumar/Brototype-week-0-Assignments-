#include <stdio.h>
#include <stdlib.h>
int array1[10][10],array2[10][10],array_sum[10][10];
void getArray(int);
void displayArray(int);
void addArray();
//void newDisplay();
int row,column;

int main(){
     printf("\nEnter the size of array : ");
     printf("\n\t\t\trows\t: ");
     scanf("%d",&row);
     printf("\n\t\t\tcolumns\t: ");
     scanf("%d",&column);
     printf("\nEnter the first array elements : \n");
     getArray(1);
     printf("\nEnter the second array elements : \n");
     getArray(2);
     addArray();
     printf("\n\nDisplaying the first array elements : ");
     displayArray(1);
     printf("\n\nDisplaying the second array elements : ");
     displayArray(2);
     printf("\n\nThe sum : \t\t\t");
     displayArray(3);
     //printf("\nThe new view\n\n\n");
     //newDisplay();
     printf("\n");


}
void getArray(int choice){
     if (choice == 1){
           for(int i=0;i<row;i++){
               for(int j=0;j<column;j++){
                    printf("\nArray[%d][%d]  : ",i,j);
                    scanf("%d",&array1[i][j]);
                    }
                }
     
     }else {
           for(int i=0;i<row;i++){
               for(int j=0;j<column;j++){
                    printf("\nArray[%d][%d]  : ",i,j);
                    scanf("%d",&array2[i][j]);
                    }
               }
     
          }
     
     }



void displayArray(int choice){
     if (choice == 1){
          for(int i=0;i<row;i++){
               for(int j=0;j<column;j++){
                    printf("\t%d",array1[i][j]);
               }
          }
     }else if (choice == 2){
           for(int i=0;i<row;i++){
               for(int j=0;j<column;j++){
                    printf("\t%d",array2[i][j]);
               }
          }
         
     }else if (choice == 3){
          for(int i=0;i<row;i++){
               for(int j=0;j<column;j++){
                    printf("\t%d",array_sum[i][j]);
               }
          }
     }else{
          printf ("Error");
          }

     }

void addArray(){
     for(int i=0;i<row;i++){
          for(int j=0;j<column;j++){
               array_sum[i][j] = array1[i][j]+array2[i][j];
          }
     }
}



// void newDisplay(){
//      for(int i=0;i<row;i++){
//           for(int j=0;j<column;j++){
//                 printf("\t%d",array1[i][j]);

//           }for(int j=0;j<column;j++){
//                printf("\t\t%d",array2[i][j]);

//           }for(int j=0;j<column;j++){
//                printf("\t\t%d",array_sum[i][j]);
//           }
//           printf("\n");
//           }  
// }