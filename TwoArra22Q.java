import java.util.Scanner;

public class TwoArra22Q {


     int[][] array = new int[20][20];
    

     void getArray(int rows, int columns){
          Scanner input = new Scanner(System.in);
               System.out.println("Enter the array elements : ");
               for(int i=0; i<rows; i++){
                    for (int j=0; j<columns; j++){
                    array[i][j] = input.nextInt();
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

     void sum(TwoArra22Q obj1,TwoArra22Q obj2,int rows,int columns){
          for (int i=0; i<rows; i++){
               for (int j=0; j<columns; j++){
                   array[i][j] = obj1.array[i][j] + obj2.array[i][j];

               }
          }
     }
     public static void main(String[] args){
          try (Scanner input = new Scanner(System.in)) {
               String message1=new String("The First Array : \n");
               String message2=new String("The Second Array : \n");
               String message3=new String("The  Sum Of Two arrays Are : \n");

               System.out.println("Enter size of the Array");
               int rows=input.nextInt();
               int columns=input.nextInt();
               TwoArra22Q obj1=new TwoArra22Q();
               TwoArra22Q obj2=new TwoArra22Q();
               TwoArra22Q obj3=new TwoArra22Q();

        
               obj1.getArray(rows,columns);
               obj2.getArray( rows, columns);


               obj2.displayArray(message2,rows,columns);
               obj1.displayArray(message1,rows,columns);


               obj3.sum(obj1,obj2,rows,columns);
               obj3.displayArray(message3,rows,columns);
          }


     }

}
     
