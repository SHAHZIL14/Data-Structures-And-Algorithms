#include <iostream>
using namespace std;
void printInvertedTree(int n)
{
  for (int i = 5; i > 0; i--)
  {
    for (int j = 0; j < i; j++)
    {
      cout << " *";
    }
    cout << endl;
  }
}
int main()
{
  int input;
  cout << "Enter the size of tree:";
  cin >> input;
  printInvertedTree(input);
  return 0;
}