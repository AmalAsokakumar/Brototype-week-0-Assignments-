//this code is biased on  question 22




import java.util.Scanner;

public class TwoArray22 {


     int[][] array = new int[20][20];
    

     void getArray(int rows, int columns){
          try (Scanner input = new Scanner(System.in)) {
               System.out.println("Enter the array elements : ");
               for(int i=0; i<rows; i++){
                    for (int j=0; j<columns; j++){
                    array[i][j] = input.nextInt();
                    }
               }
          }
     }

     void displayArray(String msg,int rows,int columns){
          System.out.println(msg);
          for (int i=0; i<rows; i++){
               for (int j=0; j<columns; j++){
                    System.out.print(array[i][j]+" ");
               }System.out.println("\n");
          }
     }

     void sum(TwoArray22 obj1,TwoArray22 obj2,int rows,int columns){
          for (int i=0; i<rows; i++){
               for (int j=0; j<columns; j++){
                   array[i][j] = obj1.array[i][j] + obj2.array[i][j];

               }
          }
     }
     public static void main(String[] args){
          try (Scanner input = new Scanner(System.in)) {
               String message1=new String("The First Array");
               String message2=new String("The Second Array");
               String message3=new String("The  Sum Of Two arrays Are : ");

               System.out.println("Enter size of the Array");
               int rows=input.nextInt();
               int columns=input.nextInt();
               TwoArray22 obj1=new TwoArray22();
               TwoArray22 obj2=new TwoArray22();
               TwoArray22 obj3=new TwoArray22();

        
               obj1.getArray(rows,columns);
               obj2.getArray( rows, columns);


               obj2.displayArray(message2,rows,columns);
               obj1.displayArray(message1,rows,columns);


               obj3.sum(obj1,obj2,rows,columns);
               obj3.displayArray(message3,rows,columns);
          }


     }

}
     
