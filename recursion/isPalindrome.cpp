#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s, int i, int j)
{
  if(i==int(s.size()/2)) return true;
  if(s[i]!=s[j]) return false;
  return isPalindrome(s,i+1,j-1);
}
int main()
{
  string s ;
  cout<<"Enter the string";
  cin>>s;
  cout << isPalindrome(s, 0, s.size() - 1);
}