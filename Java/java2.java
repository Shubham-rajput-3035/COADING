import java.util.Scanner;

public class java2 {

    public static void main(String[] args) {
        // question 1
        float a = 7 / 4.0f * 9 / 2.0f;
        System.out.println(a);

        // question 2
        char grade = 'B';
        grade = (char) (grade + 8);
        System.out.println(grade);

        // Decrept
        grade = (char) (grade - 8);
        System.out.println(grade);

        // question 3
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int b = sc.nextInt();
        System.out.println(b > 8);

        // question 4
        System.out.println("Enter three numbers: ");
        int u = sc.nextInt();
        int v = sc.nextInt();
        int c = sc.nextInt();
        int exe = (v * v - u * u) / (2 * c * 5);
        System.out.println(exe);

        // question 5
        System.out.println("Find its value:  ");
        int x = 7;
        int val = x + 49 / x + 35 / x;
        System.out.println(val);
        sc.close();
    }
}
