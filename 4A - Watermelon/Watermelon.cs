using System;

class Watermelon
{
    static void Main()
    {
        int n = int.Parse(Console.ReadLine());
        if (n % 2 == 0 && n > 2)
            Console.Write("YES");
        else
            Console.Write("NO");
    }
}