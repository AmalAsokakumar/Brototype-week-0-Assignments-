import java.util.Scanner;

public class FindingSubsetOfAString {

     public static void main(String[] args){
          Scanner input = new Scanner(System.in);
          System.out.println("Enter a string : ");
          String str = input.next();
          int len = str.length();
          String[] subset= new String[len*(len+1)/2];
          int index = 0;

          for (int i=0; i<len; i++){
               for (int j=i; j<len; j++){
                    subset[index] = str.substring(i, j+1);
                    index++;
               }
          }      
          
          
          for(int i=0; i<subset.length; i++){
               System.out.println(subset[i]);
          }
     
}
}