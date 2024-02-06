
// package Com.Company;

import java.util.Scanner;

public class java1 {

    public static void main(String[] args) {
        System.out.println("Taking Input From The User");
        Scanner sc = new Scanner(System.in);
        // Exercise Question

        System.out.println("Enter number Marks 1");
        float Marks1 = sc.nextFloat();
        System.out.println("Enter number Marks 2");
        float Marks2 = sc.nextFloat();
        System.out.println("Enter number Marks 3");
        float Marks3 = sc.nextFloat();
        System.out.println("Enter number Marks 4");
        float Marks4 = sc.nextFloat();
        System.out.println("Enter number Marks 5");
        float Marks5 = sc.nextFloat();
        float Percantage = ((Marks1 + Marks2 + Marks3 + Marks4 + Marks5) / 500) * 100;
        System.out.println("The Percentage of these numbers is: ");
        System.out.println(Percantage);

        // float CGPA=(Marks1+Marks2+Marks3+Marks4+Marks5)/50;
        // System.out.println("The CGPA of these numbers is: ");
        // System.out.println(CGPA);

        // Practice Questions chapter 1
        // question num 1
        System.out.println("Enter Three numbers:  ");
        int a = 87;
        int b = 98;
        int c = 56;
        int sum = a + b + c;
        System.out.println(sum);

        // Question num 2
        System.out.println("CGPA of three subjects: ");
        float sub1 = 87;
        float sub2 = 77;
        float sub3 = 97;
        float cgpa = (sub1 + sub2 + sub3) / 30;
        System.out.println(cgpa);

        // question num 3
        System.out.println("What is your name: ");
        // Scanner sc=new Scanner(System.in);
        String str = sc.next();
        System.out.println("Hello " + str + " have a good day");

        // question num 4
        System.out.println("Convert into km to miles and metre");
        float km = sc.nextFloat();
        double mile = km * 0.621371;
        float meter = km * 1000;
        System.out.println(mile);
        System.out.println(meter);

        // question num 5
        System.out.println("Enter any number:  ");
        System.out.println(sc.hasNextInt());

        sc.close();
    }
}
