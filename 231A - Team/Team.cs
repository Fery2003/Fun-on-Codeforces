using System;

class Team
{
    static void Main()
    {
        int max = int.Parse(Console.ReadLine());
        int canSolve = 0;

        for (int i = 0; i < max; i++)
        {
            int count = 0;
            String str = Console.ReadLine();

            foreach (char c in str)
                count += (c == '1') ? 1 : 0;

            canSolve += (count >= 2) ? 1 : 0;
        }

        Console.Write(canSolve);
    }
}