//Area of a circle
import java.util.Scanner;
public class First {
   public static void main(String[] args) {
//    int x; //declaration
//    x = 7; //initialisation
//     //updation
//    int y = 2;
//    float u = x/y;
float pie = 3.1416f;
Scanner scan = new Scanner(System.in);
System.out.print("Enter the radius of the circle : ");
double a = scan.nextDouble();
double Area = pie*a*a;
 //  System.out.print();
   System.out.println("Area of the circle of radius " +a+ " is : " +Area);
    
   }
}
