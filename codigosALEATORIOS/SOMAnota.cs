namespace Lista_01EX_02
{
    class Program
    {
        static void Main(string[] args)
        {
            int a, b;
            float media;

            System.Console.WriteLine("Escreva primeira nota: ");
            a = int.Parse(System.Console.ReadLine());
            System.Console.WriteLine("Escreva segunda nota: ");
            b = int.Parse(System.Console.ReadLine());

            media = (a + b) / (3);

            System.Console.WriteLine("Faltam " + media + "!!!");
        }
    }
}
