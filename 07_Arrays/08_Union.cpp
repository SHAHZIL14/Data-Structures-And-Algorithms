#include <bits/stdc++.h>
using namespace std;
void printList(vector<int> &v)
{
  for (auto it : v)
  {
    cout << it << ' ';
  }
  cout << endl;
}
// print

set<int> Union(vector<int> &v1, vector<int> &v2)
{
  set<int> s;
  for (int i : v1)
  {
    s.insert(i);
  }
  for (int i : v2)
  {
    s.insert(i);
  }
  return s;
}
// Bruteforce

vector<int> UnionOptimal(vector<int> &v1, vector<int> &v2)
{
  int n1 = v1.size();
  int n2 = v2.size();
  int i = 0;
  int j = 0;
  vector<int> v;
  while (i < n1 && j < n2)
  {
    if (v1[i] <= v2[j])
    {
      if (v.size() == 0 || v.back() != v1[i])
      {
        v.push_back(v1[i]);
      }
      i++;
    }
    else
    {
      if (v.size() == 0 || v.back() != v2[j])
      {
        v.push_back(v2[j]);
      }
      j++;
    }
  }
  while (j < n2)
  {
    if (v.size() == 0 || v.back() != v2[j])
    {
      v.push_back(v2[j]);
    }
    j++;
  }
  while (i < n1)
  {
    if (v.size() == 0 || v.back() != v1[i])
    {
      v.push_back(v1[i]);
    }
    i++;
  }
  return v;
}
// Optimal

int main()
{
  vector<int> v1 = {1, 2, 3, 4, 5};
  vector<int> v2 = {3, 4, 5, 6, 7};
  vector<int> v = UnionOptimal(v1, v2);
  printList(v);
  return 0;
}