#include <iostream>
using namespace std;
bool armstrongNumber(int n)
{
  int sum = 0;
  int num = n;
  while (n > 0)
  {
    int t = n % 10;
    sum += (t * t * t);
    n /= 10;
  }
  return sum == num ? true : false;
}
int main()
{
  int n = 0;
  cout << "Enter n: ";
  cin >> n;
  armstrongNumber(n) == 1 ? cout << "Its an armstrong." : cout << "No its not an armstrong.";
  return 0;
}