import java.util.Scanner;

public class WTLW {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int max = sc.nextInt();
        String[] tempStrings = new String[max];

        for (int i = 0; i < max; i++)
            tempStrings[i] = sc.next();

        for (String string : tempStrings)
            if (string.length() <= 10)
                System.out.println(string);
            else
                System.out.println("" + string.charAt(0) + (string.length() - 2) + string.charAt(string.length() - 1));

        sc.close();
    }
}