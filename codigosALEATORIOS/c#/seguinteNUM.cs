namespace exe1
{
    class Program
    {
        static void Main(string[] args)
        {
            int x, seg;

            System.Console.WriteLine("Escreva um numero: ");
            x = int.Parse(System.Console.ReadLine());
            seg = x;

            seg = ++seg;
            System.Console.WriteLine(+ x + " Proximo é -> " + seg);
        }
    }
}
