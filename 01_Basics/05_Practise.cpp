#include <iostream>
using namespace std;

int sum(int a, int b)
{
  int sum = a + b;
  return sum;
}

int main()
{
  int a, b;
  cin >> a >> b;
  int value = sum(a, b);
  cout << "Value of sum of " << a << " and  " << b << " is : " << value;
  return 0;
}