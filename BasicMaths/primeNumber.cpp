#include <iostream>
using namespace std;
bool isPrime(int n)
{
  int count = 0;
  for (int i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      count++;
      if (i != n / i)
        count++;
    }
  }
  return count == 2;
}
int main()
{
  int n;
  cin >> n;
  cout << isPrime(n);
  return 0;
}