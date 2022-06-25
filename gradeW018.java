import java.util.Scanner;

public class gradeW018{
     public static void main(String[] args) {
          Scanner Ui=new Scanner(System.in);
          System.out.println("Enter Marks obtained");
          System.out.print("\nWritten Test : ");
          float Wmark = Ui.nextInt();
          System.out.print("\nLab Exams : ");
          float Lmark = Ui.nextInt();
          System.out.print("\nAssignments Marks : ");
          float Amark = Ui.nextInt();
          //float grade = ((Wmark*0.70) + (Lmark*0.20) + (Amark*0.10));
          float grade = ((Wmark*70)/100 + (Lmark*20)/100 + (Amark*10)/100);
          System.out.println("\nMark "+grade+"%\n");


     }
}