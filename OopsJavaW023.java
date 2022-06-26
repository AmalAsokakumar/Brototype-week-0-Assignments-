import java.util.Scanner;

public class OopsJavaW023 {

     int[][] data=new int[10][10];

     public void getArray(int numberOfRows,int numberOfColumns){
          Scanner input=new Scanner(System.in);
          System.out.println("Enter The Array Elements : ");
          for(int i=0 ; i<numberOfRows ; i++){
               for(int j=0; j<numberOfColumns ; j++){
                    data[i][j]= input.nextInt(); 
               }
          }
          //this.data=data;
     }
     public void displayArray(OopsJavaW023 obj, int numberOfRows,int numberOfColumns){
          System.out.println("Entered Array Elements are : ");
          for(int i=0;i<numberOfRows;i++){
               for(int j=0; j<numberOfColumns;j++){
                   System.out.println(obj.data[i][j]);
               }
          }
     }
     public static void main(String[] args){

          Scanner input=new Scanner(System.in);
          System.out.println("Enter the size of 2d array");
          int numberOfRows = input.nextInt();
          int numberOfColumns = input.nextInt();
          OopsJavaW023 obj =new OopsJavaW023();
          OopsJavaW023 obj2 =new OopsJavaW023();
           obj.getArray(numberOfRows, numberOfColumns);
          obj2.getArray(numberOfRows, numberOfColumns);
          obj.displayArray(obj, numberOfRows, numberOfColumns);
          obj.displayArray(obj2, numberOfRows, numberOfColumns);




          for(int i=0;i<numberOfRows;i++){
               for(int j=0; j<numberOfColumns;j++){
                   System.out.println(obj.data[i][j]);
               }
          }


          
     

     }
   
               
     
   
          


     }
