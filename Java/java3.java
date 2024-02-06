// import java.util.Scanner;

public class java3 {
    // Chapter String
    public static void main(String[] args) {
        String namee = new String("Shubham Singh");
        String name = "Shubham Singh Rajput";
        System.out.print("My name is : ");
        System.out.println(namee);
        System.out.println(name);
        int value = name.length();
        System.out.println(value);
        String Lstring = name.toLowerCase();
        System.out.println(Lstring);
        String ustring = name.toUpperCase();
        System.out.println(ustring);

        String nonTrimedSreing = "       Shubham      Singh      Rajput          ";
        System.out.println(nonTrimedSreing);
        String trimed = nonTrimedSreing.trim();
        System.out.println(trimed);
        String sub = name.substring(5);
        System.out.println(sub);
        String subS = name.substring(5, 11);
        System.out.println(subS);
        String replace = name.replace('a', 'y');
        System.out.println(replace);
        String replaceChar = name.replace("Shubham", "Pawan");
        System.out.println(replaceChar);
        boolean SWF = name.startsWith("Shu");
        System.out.println(SWF);
        boolean SWL = name.endsWith("Paw");
        System.out.println(SWL);

        System.out.println(name.charAt(5));
        System.out.println(name.indexOf("am"));
        System.out.println(name.indexOf("r", 4));
        System.out.println(name.lastIndexOf("am"));
        System.out.println(name.lastIndexOf("r", 4));
        System.out.println(name.equals("Shubham"));
        System.out.println(name.equalsIgnoreCase("shubham"));

        // int a = 6;
        // float b = 5.65893f;
        // System.out.printf("The value of a is %d and value of b is %8.4f", a, b);
        // System.out.format("The value of a is %d and value of b is %f", a, b);

        // Scanner sc = new Scanner(System.in);
        // System.out.println("Enter Your Name: ");
        // String st = sc.next();
        // System.out.println(st);
        // String ste = sc.nextLine();
        // System.out.println(ste);
        // boolean SWF = name.startsWith("Paw");
        // System.out.println(SWF);

        // sc.close();

    }
}
