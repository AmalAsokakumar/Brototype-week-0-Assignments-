import java.util.Scanner;

public class Banking02Atm {

          boolean n= true;
         private int userAccountBalance = 0;    


          void bankingProcess(Banking02Atm user1){

          Scanner input = new Scanner(System.in);
          System.out.println("Enter a choice \n 1 Withdrawal \n 2 Deposit \n 3 Balance enquiry");
          int choice = input.nextInt();

          while (user1.n==true){
          switch (choice){

               case 1: 
                    user1.withdrawal();
                    break ;

               case 2: 
                    user1.deposit();
                    break ;
               
               case 3: 
                    user1.accountBalance();
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

     void withdrawal(){
          Scanner input = new Scanner(System.in);
          System.out.println("Enter the withdrawal amount : " );
          float withdrawAmount = input.nextFloat();
          this.userAccountBalance -= withdrawAmount;
          System.out.println(" You have Successfully Withdrawn rupees "+ withdrawAmount);
          System.out.println("Your current balance is  "+ userAccountBalance);
          
          return ;
     }


      void deposit(){
          Scanner input = new Scanner(System.in);
          System.out.println("Please enter the deposit amount : " );
          float depositAmount = input.nextFloat();
          this.userAccountBalance += depositAmount;
          System.out.println(" You have Successfully Deposit rupees "+ depositAmount);
          System.out.println("Your current balance is  "+ userAccountBalance);
          return;
      }

      

      void accountBalance(){ 
          System.out.println("Your account Balance is "+this.userAccountBalance);
          return;
      }
     public static void main(String[] args){

          Banking02Atm user1=new Banking02Atm();
          user1.userAccountBalance = 1000;

          user1.bankingProcess(user1);

     }

}
