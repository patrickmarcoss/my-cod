using System;

namespace exe1
{
    class Program
    {
        static void Main(string[] args)
        {
            int x, sucessor;

            Console.WriteLine("Escreva um numero -> ");
            x = int.Parse(Console.ReadLine());
            sucessor = x;

            sucessor = ++sucessor;
            Console.WriteLine(+ x + " Proximo é -> " + sucessor);
        }
    }
}
