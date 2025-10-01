#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
  while (b != 0)
  {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

int main()
{
  int a, b;
  cout << "Enter the value of a and b:";
  cin >> a, b;
  cout<<endl;
  cout << gcd(a, b);
  return 0;
}