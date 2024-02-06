import java.util.Scanner;

public class java5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int age = 6;
        if (age > 18) {
            System.out.println("Yes boy, You can drive!");
        } else {
            System.out.println("No boy you cannot drive yet!");
        }

        boolean a = true;
        boolean b = false;

        if (a && b) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
        if (a || b) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
        System.out.println(!a);
        System.out.println(!b);
        System.out.println("Enter how many year you doing job ");
        int year = sc.nextInt();
        // if (year > 56) {
        // System.out.println("You are Experienceed");
        // } else if (year > 50) {
        // System.out.println("You are semi_Experienceed");
        // } else if (year > 45) {
        // System.out.println("You are Semi_Semi_Experienceed");
        // } else {
        // System.out.println("You are not Experienceed");
        // }
        switch (year) {
            case 56:
                System.out.println("You are Experienceed");
                break;
            case 50:
                System.out.println("You are semi_Experienceed");
                break;
            case 45:
                System.out.println("You are Semi_Semi_Experienceed");
                break;

            default:
                System.out.println("You are not  Experienceed");
                break;
        }
        sc.close();
    }

}
