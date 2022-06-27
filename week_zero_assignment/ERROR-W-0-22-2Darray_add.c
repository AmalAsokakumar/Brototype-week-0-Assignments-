#include <stdio.h>
#include <stdlib.h>
int** getArray(int array[10][10],int ,int);
//int** addArray(int[][],int ,int,int,int);
void displayArray(int[10][10],int,int);

int main(){
     int row =0, column=0;
     int array_1[10][10],array_2[10][10], array_sum[50][50];
     int **p_array1, **p_array2, **p_array_sum;
     printf("\nEnter the size of the array");
     printf("\nrows : ");
     scanf("%d",&row);
     printf("\ncolumn : ");
     scanf("%d",&column);

     p_array1 = getArray(array_1,row,column);
     p_array2 = getArray(array_2,row,column);
    // p_array_sum = addArray(array_sum,row,column,p_array1,p_array2);
    displayArray(array_1,row,column);

     
    
     }

     int** getArray(int array[][10],int row,int column){ // getting elements in to the array
          printf("\nEnter the array elements");
          for(int i=0; i<row; i++){
               for(int j=0;j<column;j++){
                    printf("Enter %d row %d column element : ", row, column);
                    scanf("%d",&array[i][j]);
               }
          }
         return array;
     }

     // int** addArray(array[50][50],int rows,int column,int array1,int array2){
     //      for (int i=0; i<rows; i++){
     //           for(int j=0;j<column;j++){
     //                array[i][j]=
     //           }
     //           return array;
     //      }


     // }
void displayArray(int array[][10],int row,int colum){
     for(int i=0; i<row;i++){
          for(int j=0;j<colum;j++){
               printf("\n%d",array[i][j]);
          }
          printf("\n");
     }
}
