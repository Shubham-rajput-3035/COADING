// package Com.Company;

import java.util.Scanner;

public class javainpute {
    public static void main(String[] args) {
        System.out.println("Taking Input From The User");
        Scanner sc = new Scanner(System.in);

        // System.out.println("Enter number 1");
        // int a = sc.nextInt();
        // System.out.println("Enter number 2");
        // int b = sc.nextInt();
        // int sum = a + b;
        // System.out.println("The sum of these numbers is: ");
        // System.out.println(sum);

        // System.out.println("Enter number 1");
        // float a = sc.nextFloat();
        // System.out.println("Enter number 2");
        // float b = sc.nextFloat();
        // float sum = a + b;
        // System.out.println("The sum of these numbers is: ");
        // System.out.println(sum);

        // System.out.println("Enter a number: ");
        // boolean b1 = sc.hasNextFloat();
        // System.out.println(b1);

        System.out.println("Enter strings...");
        String st = sc.next();
        String str = sc.nextLine();
        System.out.println(st);
        System.out.println(str);

        sc.close();

    }
}