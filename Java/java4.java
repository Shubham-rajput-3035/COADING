import java.util.Scanner;

public class java4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // Question 1
        String name = new String("SHUBHAM SINGH RAJPUT");
        String Lname = name.toLowerCase();
        System.out.println(Lname);
        // Question 2
        String replace = name.replace(" ", "-");
        System.out.println(replace);

        // question num 3
        String letter = "Dear <|name|> Thanks! a lot";
        letter = letter.replace("<|name|>", "Shubham");
        System.out.println(letter);
        // question 4
        String space = "Myself Shubham Singh Rajput.  Now I am pursuming BCA   for National Business Collage";
        System.out.println(space.indexOf("  "));
        System.out.println(space.indexOf("   "));

        // Question num 5

        String MyLatter="Dear Shubham.\n\t Congratulation!\n\t Your Instagram follers is 10k";
        System.out.println(MyLatter);
        String Latter2= "Dear Harry, \n\tThis  Java course is nice.\n Thanks!";
        System.out.println(Latter2);
        sc.close();
    }
}
