public class java6 {
    public static void main(String[] args) {
        int i = 1;
        while (i <= 10) {
            System.out.println(i);
            i++;
        }
        int b = 18;
        do {
            System.out.println(b);
            b--;
        } while (b != 0);

        for (int index = 1; index <= 10; index++) {
            System.out.println(index);

        }
        System.out.println("Break and Continue statement");

        // for (int index = 1; index <= 10; index++) {
        // System.out.println(index);
        // System.out.println("Java is intresting language");
        // if (index == 6) {

        // System.out.println("Loop is end");
        // break;
        // }

        // }
        // int in = 0;
        // while (in <= 10) {
        // System.out.println(in);
        // System.out.println("Java is intresting language");
        // if (in == 6) {

        // System.out.println("Loop is end");
        // break;
        // }
        // in++;
        // }

        // int in = 0;
        // do {
        // System.out.println(in);
        // System.out.println("Java is intresting language");
        // if (in == 6) {

        // System.out.println("Loop is end");
        // break;
        // }
        // in++;
        // } while (in <= 10);

        // Continue statement

        for (int index = 1; index <= 10; index++) {
            if (index == 6) {
                System.out.println("Loop is end");
                continue;
            }
            System.out.println(index);
            System.out.println("Java is intresting language");

        }
        int in = 0;
        while (in <= 10) {
            
            in++;
        if (in == 6)
        {
        System.out.println("Loop is end");
        continue;
        }
        System.out.println(in);
        System.out.println("Java is intresting language");

        }

        // int in = 0;
        // do {
            
        //     in++;
        //     if (in == 6) {
        //         System.out.println("Loop is end");
        //         continue;
        //     }
        //     System.out.println(in);
        //     System.out.println("Java is intresting language");
        //     System.out.println("Loop is end");

        // } while (in <= 10);

    }

}
