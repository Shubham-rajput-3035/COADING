import java.util.Scanner;

public class loopps {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    // // QUIZ QUESTIONS
    // // 1.
    // int i = 100;
    // while (i <= 200) {
    // System.out.println(i);
    // i++;
    // }
    // // 2.
    // int in = 100;
    // do {
    // System.out.println(in);
    // in++;
    // } while (in <= 200);
    // // 3.
    // for (int index = 1; index <= 10; index++) {
    // System.out.println(2 * index + 1);

    // }
    // // 4.
    // for (int index = 10; index >= 1; index--) {
    // System.out.println(index);

    // }

    // PRACTICE QUESTIONS
    // QUESTION num 1.
    // for (int index = 5; index >= 1; index--) {
    // for (int j = 1; j <= index; j++) {
    // System.out.printf("*");
    // }
    // System.out.print("\n");
    // }

    // // QUESTION num 2.
    // System.out.println("Enter number: ");
    // int num = sc.nextInt();

    // int i = 1;
    // int sum = 0;
    // while (i <= num) {
    // sum = sum + (2 * i);
    // i++;
    // }
    // System.out.println(sum);
    // // Using for loop
    // int even = 0;
    // for (int ind = 1; ind <= num; ind++) {
    // even = even + (2 * ind);
    // }
    // System.out.println(even);
    // // QUESTION num 3.
    // System.out.println("Enter number: ");
    // int n = sc.nextInt();
    // for (int j = 1; j <= 10; j++) {
    // System.out.println(j * n);
    // }
    // // QUESTION num 4.
    // System.out.println("Enter number: ");
    // int nu = sc.nextInt();
    // for (int j = 10; j >= 1; j--) {
    // System.out.printf("%d X %d = %d",nu,j,j * nu);
    // System.out.printf("\n");
    // }
    // // QUESTION num 5.
    // System.out.println("Enter number: ");
    // int factorial = 1;
    // int nu = sc.nextInt();
    // for (int i = 1; i <= nu; i++) {
    // factorial *= i;
    // }
    // System.out.println(factorial);

    // // QUESTION num 6.

    // int fac = 1;
    // int i = 1;
    // System.out.println("Enter number: ");
    // int n = sc.nextInt();
    // while (i <= n) {
    // fac *= i;
    // i++;
    // }
    // System.out.println(fac);

    // // QUESTION num 7.

    // int i = 5;
    // int j = 1;

    // while (i >= 1) {
    //   while (j <= i) {
    //     System.out.printf("*");
    //     j++;
    //   }
    //   System.out.print("\n");
    //   i--;
    // }

    // QUESTION num 8.
    int sum=0;
      System.out.println("Enter number: ");
    int n = sc.nextInt();
    for (int j = 1; j <= 10; j++) {
      sum=sum+(n*j);
    }
    System.out.println(sum);


    sc.close();
  }
}
