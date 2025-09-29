#include <iostream>
using namespace std;
void printNoTree(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << (i+1)<< " ";
    }
    cout << endl;
  }
}
int main()
{
  int input;
  cout << "Enter the tree length: ";
  cin >> input;
  printNoTree(input);
  return 0;
}