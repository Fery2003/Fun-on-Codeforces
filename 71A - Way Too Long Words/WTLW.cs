using System;

class WTLW
{
    static void Main()
    {
        int max = int.Parse(Console.ReadLine());

        String[] tempStrings = new String[max];

        for (int i = 0; i < max; i++) {
            tempStrings[i] = Console.ReadLine();
        }

        foreach (String str in tempStrings)
        {
            if (str.Length <= 10) {
                Console.WriteLine(str);
            }
            else {
                Console.WriteLine(str.ElementAt(0) + (str.Length - 2).ToString() + str.ElementAt(str.Length - 1));
            }
        }
    }
}