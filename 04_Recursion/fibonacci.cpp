#include <iostream>
using namespace std;
int fibonacciRecursion(int n)
{
  if (n == 1 || n == 0)
    return n;
  return fibonacciRecursion(n - 1) + fibonacciRecursion(n - 2);
}

int fibonacciLoop(int n)
{
  int a = 0;
  int b = 1;
  int next;
  for (int i = 3; i <= n; i++)
  {
    next = a + b;
    a = b;
    b = next;
  }
  return next;
}

int main()
{
  int n;
  cout << "Enter the value of n:";
  cin >> n;
  cout << fibonacciLoop(n);
  return 0;
}
