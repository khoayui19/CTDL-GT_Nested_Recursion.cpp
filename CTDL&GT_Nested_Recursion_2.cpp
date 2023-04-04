//https://www.geeksforgeeks.org/
class nestedRecursion{

  static void nestedRecursion(int n)
  {
    if (n > 0) 
    {
      System.out.print(n + " ");
      nestedRecursion(n - 1);
    }
  }
public static void main(String[] args)
  {
    int x = 3;
    nestedRecursion(x);
  }
}
