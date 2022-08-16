using System;

class NextRound
{
    static void Main()
    {
        string input = Console.ReadLine();
        int count = 0;
        int n = int.Parse(input.Split(' ')[0]);
        int k = int.Parse(input.Split(' ')[1]);

        int[] a = new int[n];
        input = Console.ReadLine();

        for (int i = 0; i < n; i++)
        {
            a[i] = int.Parse(input.Split(' ')[i]);
        }

        for (int i = 0; i < n; i++)
            if (a[i] >= a[k - 1] && a[i] != 0)
                count++;


        Console.WriteLine(count);
    }
}