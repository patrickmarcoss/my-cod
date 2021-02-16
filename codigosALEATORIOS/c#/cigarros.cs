namespace exe
{
    class CIGS
    {
        static void Main(string[] args)
        {

            float valores, preço; 
            int anos, qtd;
            
            System.Console.WriteLine("Escreva o preço do cigarro: ");
            preço = float.Parse(System.Console.ReadLine());
            System.Console.WriteLine("Quantos anos você fuma? ");
            anos = int.Parse(System.Console.ReadLine());
            System.Console.WriteLine("Quantos cigarros por dia ? ");
            qtd = int.Parse(System.Console.ReadLine());

            System.Console.WriteLine();

            valores = ((365 * anos * qtd / 28) * preço);
            System.Console.Write("R$" + valores + " Gastos com cigarros! \n");
            
        }
    }
}
