import java.util.Scanner;


public class java {
    

    public  static void Funct(int  s, int d){


       if(s==d){

        System.out.println("I have  successfully Reached to my destination....");

        return;
       }

        //s++;

        Funct(s+1, d);   // we cannot use  s++ in function call
        

    }
    public static void main(String[] args) {
        


        System.out.println("Enter the  source and destination value: ");
        Scanner sc= new Scanner(System.in);
       
        int source =  sc.nextInt();
        int destination=sc.nextInt();

// System.out.println("You have  Entered the  following values of the source and destination: ");
//         System.out.println("Source: "+source);
//         System.out.println("Destination: "+destination);
        

      Funct(source,destination);

    }
}
