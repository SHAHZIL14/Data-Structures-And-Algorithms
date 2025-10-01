#include <iostream>
using namespace std;
int returnReverseNumber(int n)
{
  int reversedNum = 0;
  while (n > 0)
  {
    int t = n % 10;
    reversedNum = reversedNum * 10 + t;
    n /= 10;
  }
  return reversedNum;
}
int main()
{
  int sample;
  cin >> sample;
  cout << returnReverseNumber(sample);
}