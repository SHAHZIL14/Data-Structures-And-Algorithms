#include <iostream>
using namespace std;
int sumOfN(int i, int sum)
{
  if (i < 1)
    return sum;
  sumOfN(i - 1, sum + i);
}
int sumOfNF(int n)
{
  if(n==1) return n;
  return n + sumOfNF(n-1);
}
int main()
{
  int n;
  cout << "Enter the value of N:";
  cin >> n;
  cout << sumOfNF(n);
  return 0;
}