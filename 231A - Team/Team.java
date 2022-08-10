import java.util.Scanner;

public class Team {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int max = sc.nextInt();
        int certainty = 0;

        for (int i = 0; i <= max; i++) {
            int count = 0;
            String str = sc.nextLine();

            char[] spliced = str.toCharArray();

            for (char c : spliced)
                count += (c == '1') ? 1 : 0;

            certainty += (count >= 2) ? 1 : 0;

        }
        System.out.println(certainty);

        sc.close();
    }
}