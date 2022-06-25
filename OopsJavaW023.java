import java.util.Scanner;

public class OopsJavaW023 {
     OopsJavaW023(){
         int array[][];
         
         void getArray1(int row,int col){
               for(int i=0;i<row;i++){
                    for(int j=0;j<col;j++){
                         ob.array[i][j]= ui.nextInt(); 
                         }
                    }
                    return ob.array;
               }
     }

     public static void main(String[] args){
          Scanner ui=new Scanner(System.in);
          System.out.println("Enter the size of 2d array");
          int row = ui.nextInt();
          int col = ui.nextInt();

          OopsJavaW023 ob=new OopsJavaW023();
          ob.getArray1(row,col);
     


     }
   
          


     }
