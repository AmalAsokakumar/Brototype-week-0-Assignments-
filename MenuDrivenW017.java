import java.util.Scanner;

public class MenuDrivenW017 {

     public static void main(String[] args){
          
          Scanner ui=new Scanner(System.in);
          System.out.println("select from the following \n1 addition \n2 subtraction \n3 multiplication \n4 division ");
          int operation = ui.nextInt();
          System.out.println("Enter two numbers : ");
          int var1 = ui.nextInt();
          int var2 = ui.nextInt();
          int result =0;

          switch (operation){
               
               case 1 :{ 
                   result = addition(var1, var2);
                         break;
                     }
               case 2 :{
                   result = subtraction(var1, var2);
                    break;
                         }
               case 3 :{
                   result = multiplication(var1, var2);
                    break;

                         }
               case 4 :{
                   result = division (var1, var2);
                   break;

                         }
               default : {
                    System.out.println("invalid input");
               }

          }

          System.out.println("The result is :"+result);

     }
static int addition(int var1, int var2){
     return var1+var2;

}
static int subtraction (int var1, int var2){
     if (var1 > var2){
          return var1-var2;
     }else{
          return var2-var1;
     }

}
static int multiplication (int var1, int var2){
     return var1*var2;

}
static int division (int var1, int var2){
     return var1/var2;

}     

}
