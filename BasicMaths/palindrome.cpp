#include <iostream>
using namespace std;
bool palindrome(int n)
{
  int reversedNum = 0;
  int initialN = n;
  while (n > 0)
  {
    int t = n % 10;
    reversedNum = reversedNum * 10 + t;
    n /= 10;
  }
  return reversedNum == initialN ? true : false;
}
int main()
{
  int n;
  cout << "Enter the value of n:";
  cin >> n;
  cout << palindrome(n);
  return 0;
}