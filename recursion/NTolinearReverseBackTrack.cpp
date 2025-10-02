#include <iostream>
using namespace std;
void NToLinear(int n)
{
  if (n == 0)
    return;
  cout << n << endl;
  NToLinear(--n);
}
int main()
{
  int n;
  cout << "Enter the value of n:";
  cin >> n;
  NToLinear(n);
  return 0;
}