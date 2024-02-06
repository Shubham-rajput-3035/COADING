//  Basic Qiestion

import java.util.Scanner;

public class java1 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("1. Write a Java program to print 'Hello' on screen and your name on a separate line.");
        System.out.println("Enter any Strings: ");
        String name = sc.nextLine();
        System.out.println("Hello " + name);

        System.out.println("2. Write a Java program to print the sum of two numbers.");
        System.out.println("Enter frist number: ");
        int n1 = sc.nextInt();
        System.out.println("Enter second number: ");
        int n2 = sc.nextInt();
        System.out.println("Sum of number: ");
        int n3 = n1 + n2;
        System.out.println(n3);
        System.out.println("3. Write a Java program to divide two numbers and print them on the screen.");
        System.out.println("Enter frist number: ");
        int f = sc.nextInt();
        System.out.println("Enter second number: ");
        int s = sc.nextInt();
        System.out.println("divide of number: ");
        int d = f / s;
        System.out.println(d);

        System.out.println("4. Write a Java program to print the results of the following operations.");
        System.out.println("Solution of the problem: ");
        int a = -5 + 8 * 6;
        System.out.println(a);
        System.out.println("Solution of the problem: ");
        int b = (55 + 9) % 9;
        System.out.println(b);
        System.out.println("Solution of the problem: ");
        int c = 20 + 3 * 5 / 8;
        System.out.println(c);
        System.out.println("Solution of the problem: ");
        int e = 5 + 15 / 3 * 2 - 8 % 3;
        System.out.println(e);

        System.out.println("5. Write a Java program that takes two numbers as input and displays the product of two numbers.");
        System.out.println("Enter frist number: ");
        int a1 = sc.nextInt();
        System.out.println("Enter second number: ");
        int b1 = sc.nextInt();
        System.out.println("product of number: ");
        int c1 = a1 * b1;
        System.out.println(c1);
        System.out.println("6. Write a Java program to print the sum (addition), multiply, subtract, divide and remainder of two numbers.");
        System.out.println("Enter frist number: ");
        int num1 = sc.nextInt();
        System.out.println("Enter second number: ");
        int num2 = sc.nextInt();
        System.out.println("Sum of number: ");
        int sum = num1 + num2;
        System.out.println(sum);
        System.out.println("Sub of number: ");
        int sub = num1 - num2;
        System.out.println(sub);
        System.out.println("mul of number: ");
        int mul = num1 * num2;
        System.out.println(mul);
        System.out.println("div of number: ");
        int div = num1 / num2;
        System.out.println(div);
        System.out.println("mod of number: ");
        int mod = num1 % num2;
        System.out.println(mod);

        System.out.println("7. Write a Java program that takes a number as input and prints its multiplication table up to 10.");

        int num = sc.nextInt();
        for (int i = 1; i <= 10; i++) {
            System.out.println(num * i);
        }

       System.out.println("8. Write a Java program to display the following pattern.");
        System.out.println(" J a v v a ");
        System.out.println(" J a a v v a a");
        System.out.println("J J aaaaa V V aaaaa");
        System.out.println(" JJ a a V a a");
        System.out.println("9. Write a Java program to compute the specified expressions and print the output.");
        System.out.println((25.5 * 3.5 - 3.5 * 3.5) / (40.5 - 4.5));

       System.out.println("10. Write a Java program to compute a specified formula.  ");
        double result = 4.0 * (1 - (1.0 / 3) + (1.0 / 5) - (1.0 / 7) + (1.0 / 9) -
        (1.0 / 11));

        // Print the calculated result
        System.out.println(result);





        sc.close();

    }
}
