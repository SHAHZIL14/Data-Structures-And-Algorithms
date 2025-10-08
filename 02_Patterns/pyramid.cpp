#include <iostream>
using namespace std;
void printPyramid(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i + 1; j++)
    {
      cout << "  ";
    }
    for (int j = 0; j < 2 * (i) + 1; j++)
    {
      cout << " *";
    }
    cout << endl;
  }
}
int main()
{
  int input;
  cout << "Enter pyramid size: ";
  cin >> input;
  printPyramid(input);
  return 0;
}