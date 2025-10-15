#include <bits/stdc++.h>
using namespace std;
void printList(vector<int> &v)
{
  for (auto it : v)
  {
    cout << it << '	';
  }
  cout << endl;
}

vector<int> intersection(vector<int> &v1, vector<int> &v2)
{
  vector<int> v;
  int n1 = v1.size();
  int n2 = v2.size();
  int i = 0;
  int j = 0;
  while (i < n1 && j < n2)
  {
    if (v1[i] == v2[j])
    {
      v.push_back(v1[i]);
      i++;
      j++;
    }
    else
    {
      if (v1[i] < v2[j])
        i++;
      else
        j++;
    }
  }
  return v;
}

int main()
{
  vector<int> v1 = {1, 2, 2, 3, 3, 4, 5, 6};
  vector<int> v2 = {2, 3, 3, 5, 6, 6, 7};
  vector<int> v = intersection(v1, v2);
  printList(v);
  return 0;
}