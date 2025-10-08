#include <bits/stdc++.h>
using namespace std;

void printDigits(int N)
{
  while (N > 0)
  {
    int t = N % 10;
    cout << t << endl;
    N /= 10;
  }
}

int main()
{
  int num;
  cout << "Give N:";
  cin >> num;
  printDigits(num);
  return 0;
}