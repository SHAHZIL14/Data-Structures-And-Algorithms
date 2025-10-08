#include <iostream>
using namespace std;
void printTree(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}
int main()
{
  int input;
  cout << "Enter tree length: ";
  cin >> input;
  printTree(input);
  return 0;
}