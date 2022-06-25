


// try this program in another compailer 


import java.util.Scanner;

public class PrimeJavaW016 {

     public static void main (String args[]){
          Scanner ui= new Scanner(System.in);
          System.out.print ("\nEnter a number to check whether it's a prime number or not : ");
          int fg =0;
          int variable = ui.nextInt();
          if ((variable !=0) && (variable !=1)){
               for (int i = 2; variable/2 <=i;i++){
                    if (variable % i == 0){
                         fg = 1;
                         System.out.println(variable+" : is not a Prime number");
                         break;
                    }
               }
          }else {
                System.out.println( "not a Prime number");
                fg =1;
               }

          if (fg ==0){
               System.out.println(variable+ " : is a Prime number");
          }
     }
}