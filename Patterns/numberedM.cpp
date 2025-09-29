#include <iostream>
using namespace std;
void numberedM(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << (j + 1);
    }
    for (int j = 0; j < 2*(n-i-1); j++)
    {
      cout << " ";
    }
    for (int j = i; j >= 0; j--)
    {
      cout << (j+1);
    }
    cout<<endl;
  }
}

int main()
{
  int n;
  cout << "Enter the value of n: ";
  cin >> n;
  numberedM(n);
  return 0;
}