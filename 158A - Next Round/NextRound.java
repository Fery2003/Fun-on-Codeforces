import java.util.Scanner;

public class NextRound {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String in = sc.nextLine();
        int count = 0;
        int n = Integer.parseInt(in.split(" ")[0]);
        int k = Integer.parseInt(in.split(" ")[1]);

        int a[] = new int[n];

        in = sc.nextLine();
        for (int i = 0; i < n; i++)
            a[i] = Integer.parseInt(in.split(" ")[i]);

        for (int i = 0; i < n; i++)
            if (a[i] >= a[k - 1] && a[i] != 0)
                count++;

        System.out.println(count);

        sc.close();
    }
}
