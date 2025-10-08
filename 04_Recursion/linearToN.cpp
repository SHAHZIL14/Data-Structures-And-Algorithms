#include <iostream>
using namespace std;

void linearToN(int i, int n)
{
  if (i > n)
    return;
  cout << i << endl;
  i++;
  linearToN(i, n);
}
int main()
{
  int n;
  cout << "Enter the value of n:";
  cin >> n;
  linearToN(1, n);
  return 0;
}
