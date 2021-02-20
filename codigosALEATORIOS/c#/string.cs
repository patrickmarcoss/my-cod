using System;
class foreachloop
{
    public static void Main()
    {
        string [] nomes = {"AAA", "BBB", "CCC", "DDD"};
        foreach(string names in nomes)
        {
            Console.WriteLine("{0}", names);
        }
        Console.WriteLine();
    }
}
