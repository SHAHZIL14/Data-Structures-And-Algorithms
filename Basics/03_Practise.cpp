#include <iostream>
using namespace std;
int main()
{
  int age;
  cout << "Enter your age:";
  cin >> age;
  if (age < 18)
    cout << "You are not eligible";
  else if (age >= 18)
    cout << "You are eligible for the job";
  else if (age >= 55 && age <= 57)
    cout << "You are eligible for the job but retirement soon!";
  else if (age >= 57)
    cout << "Retirement time";
  return 0;
}