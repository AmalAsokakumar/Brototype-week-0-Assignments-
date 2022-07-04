import java.util.Scanner;

public class SecondLargest03 {
 public static void main(String[] args){
     Scanner input = new Scanner(System.in);
     System.out.print("Enter the Size of the array : ");
     int size = input.nextInt();
     int[] array = new int[size];
     System.out.println("Enter the array elements : ");
     for (int i = 0; i < size; i++) {  //inputting the array elements from the user.
          array[i] = input.nextInt();
     }
     int largest,secondLargest;
     if (array[0] > array[1] ){
          largest= array[0];
          secondLargest= array[1];
     }
     else{
          largest= array[1];
          secondLargest= array[0];
     }
     for (int i= 0; i<size;i++){
          if(array[i]>largest){
               secondLargest= largest;
               largest= array[i];
          }

          if ((array[i]>secondLargest) && (largest != array[i])){

               secondLargest=array[i];
          }

     }

     System.out.println("the second largest element is " + secondLargest);

     
     }
}
