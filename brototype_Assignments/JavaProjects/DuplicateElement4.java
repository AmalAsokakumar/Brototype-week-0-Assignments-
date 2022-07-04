import java.util.Scanner;

public class DuplicateElement4 {
     public static void main (String[] args){
          System.out.print("Enter the size of the array: ");
          Scanner input = new Scanner(System.in);
          int size = input.nextInt();
          int array[] = new int[size];
          int i = 0;

          System.out.println("Enter the array elements ");
          for ( i = 0; i < size; i++){
               array[i] = input.nextInt();
          }




          for (i = 0; i < size; i++){
               System.out.println("entered inside the first loop"); // selecting individual elements from the array
               for(int j=i+1;j<size; j++){ // 
                    System.out.println("entered inside the second loop condition");
               if (array[i]== array[j]){ // checking for duplicate elements in the array.
                    System.out.println("entered inside the if condition");
                    for(int k= j;k <size-1;k++){
                    System.out.println("Entered inside the array");
                    array[k]= array[k+1]; // shifting array elements by -1; 
                         }
                         size--;
                         j--;
                    }
                    
               } 

          }

          System.out.println("The array elements are : ");
          for ( i=0; i < size;i++){
               System.out.println(array[i]);

     }
     }
}
