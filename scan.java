import java.util.Scanner;
 class  ScanData {
    public static void main(String[] args) {
        // && || !
        Scanner obj=new Scanner(System.in);
        int marks=obj.nextInt();
        if (marks>=90 && marks<=100 ) {
            System.out.println("Grade A1 ");
        } 
        else if(marks>=80 && marks<90)
        {
            System.out.println("grade A2");
        }
        else if(marks>=70 && marks<80)
        {
            System.out.println("grade b1");
        }
        else if(marks>=60 && marks<70)
        {
            System.out.println("grade b2");
        }
        else if(marks>=50 && marks<60)
        {
            System.out.println("grade c1");
        }
        else if(marks>=0 && marks<50)
        {
            System.out.println("better luck next time ");
        }
        else {
            System.out.println("invalid marks ");
        }
    }
}