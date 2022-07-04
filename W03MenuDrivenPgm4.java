

import java.util.Scanner;

public class W03MenuDrivenPgm4 {

     String name;
     int strlen;
     char chArray[];


     public void  strLength(W03MenuDrivenPgm4 obj){
          int count = 0;
          for(int i=0; obj.chArray[i] != '\0';i++, count++);
          obj.strlen = count;
          



     }
     
     public static void main(String[] args){

          W03MenuDrivenPgm4 object = new W03MenuDrivenPgm4();

          System.out.println("Enter a string ");
          Scanner input=new Scanner(System.in);


          object.chArray = object.name.toCharArray();  // name string is converted to a charter array.
          object.strLength(object);
          System.out.println(object.strlen);

          

     }



    
}
