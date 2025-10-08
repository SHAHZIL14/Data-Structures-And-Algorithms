#include <bits/stdc++.h>
using namespace std;
void printNameNTimes(int n, string name)
{
  if (n == 0)
    return;
  cout << name << endl;
  n--;
  printNameNTimes(n, name);
}
int main()
{
  int n;
  string name;
  cout << "Enter the name: ";
  cin >> name;
  cout << "Enter the value of n:";
  cin>>n;
  printNameNTimes(n,name);
  return 0;
}