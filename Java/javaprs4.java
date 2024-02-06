import java.util.Scanner;

public class javaprs4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // Question num 1

        int a = 10;
        if (a == 11) {
            System.out.println("I am 11");
        } else {
            System.out.println("I am not 11");
        }
        // Question num 2

        Byte m1, m2, m3;
        System.out.println("Enter marks in Phusics");
        m1 = sc.nextByte();
        System.out.println("Enter marks in Chemestry");
        m2 = sc.nextByte();
        System.out.println("Enter marks in Mathematics");
        m3 = sc.nextByte();
        float avg = (m1 + m2 + m3) / 3.0f;
        System.out.println("Your overall percentage is " + avg);
        if (avg >= 40 && m1 >= 33 && m2 >= 33 && m3 >= 33) {
            System.out.println("Pass");
        } else {
            System.out.println("Fail");
        }

        // Question num 3
        float tax = 0;
        System.out.println("Enter your annual income: ");
        float income = sc.nextFloat();
        if (income <= 2.5f) {
            tax = tax + 0;
        } else if (income > 2.5f && income <= 5.0f) {
            tax = tax + 0.05f * (income - 2.5f);
        } else if (income > 5.0f && income <= 10.0f) {
            tax = tax + 0.05f * (5.0f - 2.5f);
            tax = tax + 0.2f * (income - 5.0f);
        } else {
            tax = tax + 0.05f * (5.0f - 2.5f);
            tax = tax + 0.2f * (10.f - 5.0f);
            tax = tax + 0.3f * (income - 10.0f);
        }
        System.out.println("Your total annual taxes are: " + tax);
        // Question num 4
        System.out.println("Enter a number of day in a weak: ");
        int day = sc.nextInt();
        switch (day) {
            case 1:
                System.out.println("Monday");
                break;

            case 2:
                System.out.println("Tuesday");
                break;

            case 3:
                System.out.println("Wednesday");
                break;

            case 4:
                System.out.println("Thrusday");
                break;

            case 5:
                System.out.println("Friday");
                break;

            case 6:
                System.out.println("Satruday");
                break;

            case 7:
                System.out.println("Sunday");
                break;

            default:
                System.out.println("Wrong enter! please try again");
                break;
        }
        // Question num 5
        System.out.println("Enter Year to check leap or not: ");
        int year = sc.nextInt();
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                System.out.println("Leap Year");
            } else {
                System.out.println("Not Leap Year");
            }

        } else {
            if (year % 100 == 0) {
                System.out.println("Leap Year");
            } else {
                System.out.println("Not Leap Year");
            }

        }
        // Question num 6
        String website = sc.next();
        if (website.endsWith(".org")) {
            System.out.println("Organization Website");
        } else if (website.endsWith(".Com")) {
            System.out.println("Commercial Website");
        } else if (website.endsWith(".in")) {
            System.out.println("Indian Website");
        }

        sc.close();
    }
}
