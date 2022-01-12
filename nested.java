import java.util.Scanner;
public class nested {
public static void main(String[] args) {
    
Scanner sc=new Scanner(System.in);

int age=sc.nextInt();

if (age>=0 && age<100) {
    System.out.println("valid input ");

    if (age>50) {
        System.out.println("senior citizen ");
        
        if(age>50 && age<80)
        System.out.println("between 50 and 80 ");
    }
    else if(age>=18)
    {
        System.out.println("you r eligible to vote ");
    }
    else 
    {
        System.out.println("not redy to vote ");
    }
}
else
{
    System.out.println("Invalid  age ");
}


}
    
}