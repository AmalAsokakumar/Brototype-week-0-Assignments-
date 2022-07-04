    import java.util.Scanner;


     public class MenuDrivenClassW024 extends Area   {

          public  double result;
          String string ;


          void displayResult(MenuDrivenClassW024 object) {
               System.out.println("The area of "+object.string+ " is "+result+" cm2");
          }

     public static void main(String[] args){
               
          System.out.println("Find the area of ");
          System.out.print("\n1 Circle \n2 Square \n3 Rectangle \n4 Triangle : " );
          try (Scanner input = new Scanner(System.in)) {
               MenuDrivenClassW024 obj = new MenuDrivenClassW024();
               int choice = input.nextInt();
               if (choice == 1){
                    System.out.print("Enter the radius of the circle : ");
                    obj.string ="Circle";
                    obj.result= obj.circle(input.nextInt());
               }else if (choice ==2){
                    System.out.print("Enter the Side length of the Square : ");
                    obj.string ="Square";
                    obj.result =obj.square(input.nextInt());
               }else if (choice == 3){
                    System.out.println("Enter the sides of a rectangle : ");
                    obj.result=obj.rectangle(input.nextInt(),input.nextInt());
                    obj.string ="Rectangle";
               }else if (choice == 4){
                    System.out.println("Enter the two sides of a Triangle : ");
                    obj.string ="Triangle";
                   obj.result= obj.triangle(input.nextInt(),input.nextInt()); 
               } else{
                    System.out.println("Invalid input");
               }
               obj.displayResult(obj);
          }
         
     }
     

     
}



