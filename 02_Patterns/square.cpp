#include <iostream>
using namespace std;

void printSquare(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << " * ";
    }
    cout << "\n";
  }
}
int main()
{
  int input;
  cout << "Enter the square size: ";
  cin >> input;
  printSquare(input);
  return 0;
}