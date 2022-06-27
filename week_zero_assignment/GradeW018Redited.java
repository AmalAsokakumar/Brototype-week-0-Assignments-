
import java.util.Scanner;
public class GradeW018Redited{
     int writtenMark;
     int labMark;
     int assignmentMark;
     double grade;


     public void getMarks(GradeW018Redited object) {
          System.out.println("Enter Your Marks ");

          try (Scanner input = new Scanner(System.in)) {
               System.out.print("Enter Your Marks On Written Exam :  ");
               object.writtenMark = input.nextInt();
               System.out.print("Enter Your Marks On Lab Exam :  ");
               object.labMark = input.nextInt();
               System.out.print("Enter Your Marks On Assignments :  ");
               object.assignmentMark = input.nextInt();
          }
     }



     public void findGrade(GradeW018Redited object) {
          object.grade =( object.writtenMark*.7) +(object.labMark*.2) +(object.assignmentMark*.1);
     }



     public void displayMark(GradeW018Redited object) {
          System.out.println("Your have "+object.grade+"% ");
     }

     public static void main(String[] args ){
          
          GradeW018Redited object = new GradeW018Redited();
          object.getMarks(object);
          object.findGrade(object);
          object.displayMark(object);


     }
}