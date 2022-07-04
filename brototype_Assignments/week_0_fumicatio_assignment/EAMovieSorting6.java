
import java.util.Arrays;
import java.util.Scanner;

public class EAMovieSorting6{

     public static void sorting(String[] StringArray, int count){
          String temp;
          for(int i=0; i<count; i++){
               for(int j=1; j < count-i;j++){
                    if(StringArray[j-1].compareToIgnoreCase(StringArray[j])>0){
                         temp =StringArray[j];
                         StringArray[j]= StringArray[j-1];
                         StringArray[j-1]= temp;
                         
                    }
               }
          }

          System.out.println("After sorting : ");
          for (int i = 0; i < count; i++){
               System.out.println(StringArray[i]);
          }

     }

     public static void main(String[] args){
          Scanner input =new Scanner(System.in);
          System.out.print("How many movies you wanted to enter  : ");
          int count =input.nextInt();
          String[] string=new String[count];
          for (int i=0;i<count;i++){
               string[i] =input.next();
          }

     
          System.out.println("Before sorting : ");
          for (int i = 0; i < count; i++){
               System.out.println(string[i]);
          }

          sorting(string,count);
          
          
     }

}