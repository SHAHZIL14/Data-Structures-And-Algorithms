#include <iostream>
using namespace std;
void printDiamond(int n)
{
  // Upper pyramid
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << "  ";
    }
    for (int j = 0; j < 2 * (i) + 1; j++)
    {
      cout << " *";
    }
    cout << endl;
  }
  // Lower pyramid
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << "  ";
    }
    for (int j = 0; j < 2 * (n - i) - 1; j++)
    {
      cout << " *";
    }
    cout << endl;
  }
}
int main()
{
  int n;
  cout << "Enter the size of diamond: ";
  cin >> n;
  printDiamond(n);
  return 0;
}