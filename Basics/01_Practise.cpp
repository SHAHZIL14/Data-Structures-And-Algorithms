#include <iostream>
using namespace std;

int main()
{
  int age;
  cin >> age;
  if (age >= 18)
  {
    cout << "You are adult" << endl;
  }
  else
  {
    cout << "You are still minor";
  }
  return 0;
}