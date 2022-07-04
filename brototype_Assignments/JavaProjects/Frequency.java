import java.util.Scanner;

public class Frequency {


     public static void main(String[ ] args){

          int[]  array = new int [20];
          int[]  visitedArray = new int[20];
          Scanner input = new Scanner(System.in);
          System.out.print("Enter the size of the array : ");
          int size = input.nextInt();

          System.out.println("Enter the array elements :"); //getting the array elements from the user.
          for (int i = 0; i < size; i++){
               array[i] = input.nextInt();
          }

          int visited = -1;
          int count = 0;


          for (int i = 0; i < array.length; i++){ // first loop for selecting individual elements from the array 
               count = 0;
               for (int j=i+1; j < array.length; j++){ //for checking individual elements 
               
               if(array[i]== array[j]){ 
                    count++;
                    visitedArray[j]=visited;
               }
               
               }
               if (visitedArray[i]!= -1){ 
                    visitedArray[i]=count;
               }

          }

          for(int i=0; i<size; i++){

               if (visitedArray[i] != -1){
                    System.out.println(array[i]+" repeated "+visitedArray[i]);
               }

          }



     }
     
}
