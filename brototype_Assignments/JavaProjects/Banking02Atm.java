import java.util.Scanner;

public class Banking02Atm {

           static int userAccountBalance = 1000;    


          // void bankingProcess(Banking02Atm user1){

          // Scanner input = new Scanner(System.in);
          // System.out.println("Enter a choice \n 1 Withdrawal \n 2 Deposit \n 3 Balance enquiry");
          // int choice = input.nextInt();

          // while (user1.n==true){
          // switch (choice){

          //      case 1: 
          //           user1.withdrawal();
          //           break ;

          //      case 2: 
          //           user1.deposit();
          //           break ;
               
          //      case 3: 
          //           user1.accountBalance();
          //           break ;
          //      case 4 :
          //                n=false;
          //                break;

          //      default :
          //           System.out.println("Invalid input");
          //           break ; 


          // }
     // }
     // }

     int withdrawal(){
          Scanner input = new Scanner(System.in);
          System.out.println("Enter the withdrawal amount : " );
          float withdrawAmount = input.nextFloat();
          Banking02Atm.userAccountBalance -= withdrawAmount;
          System.out.println(" You have Successfully Withdrawn rupees "+ withdrawAmount);
          System.out.println("Your current balance is  "+ userAccountBalance);
          return userAccountBalance;
            // used when method doesn't return any value.
     }


      int deposit(){
          Scanner input = new Scanner(System.in);
          System.out.println("Please enter the deposit amount : " );
          float depositAmount = input.nextFloat();
          Banking02Atm.userAccountBalance += depositAmount;
          System.out.println(" You have Successfully Deposit rupees "+ depositAmount);
          System.out.println("Your current balance is  "+ userAccountBalance);
          return userAccountBalance;
          //main(null);
      }

      

      int accountBalance(){ 
          System.out.println("Your account Balance is "+Banking02Atm.userAccountBalance);
          main(null);
          return userAccountBalance;
      }
     public static void main(String[] args){
          boolean n= true;
          Banking02Atm user1=new Banking02Atm();
          //user1.userAccountBalance = 1000;

         // user1.bankingProcess(user1);

         Scanner input = new Scanner(System.in);
         System.out.println("Enter a choice \n 1 Withdrawal \n 2 Deposit \n 3 Balance enquiry");
         int choice = input.nextInt();

         while (n==true){
         switch (choice){

              case 1: 
                   Banking02Atm.userAccountBalance = user1.withdrawal();
                   main(null);
                   break ;

              case 2: 
                  Banking02Atm.userAccountBalance = user1.deposit();
                  main(null);
                   break ;
              
              case 3: 
                  Banking02Atm.userAccountBalance = user1.accountBalance();
                   break ;
              case 4 :
                        n=false;
                        break;

              default :
                   System.out.println("Invalid input");
                   break ; 


         }

     }

}
}
