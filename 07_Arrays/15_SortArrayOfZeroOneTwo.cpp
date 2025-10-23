#include <bits/stdc++.h>
using namespace std;

void printList(vector<int> &v)
{
  for (auto it : v)
  {
    cout << it << '\t';
  }
  cout << endl;
}

vector<int> sortArrayBetter(vector<int> &v)
{
  vector<int> temp;
  for (auto it : v)
  {
    temp.push_back(it);
  }
  sort(temp.begin(), temp.end());
  return temp;
}
// Better

vector<int> sortArrayBrute(vector<int> &v)
{
  int zeroes = 0;
  int ones = 0;
  int twoes = 0;
  vector<int> temp;
  for (auto it : v)
  {
    if (it == 0)
      zeroes++;
    else if (it == 1)
      ones++;
    else
      twoes++;
  }
  for (int i = 0; i < zeroes; i++)
  {
    temp.push_back(0);
  }
  for (int i = 0; i < ones; i++)
  {
    temp.push_back(1);
  }
  for (int i = 0; i < twoes; i++)
  {
    temp.push_back(2);
  }
  return temp;
}
// bruteForce

void sortArrayOptimal(vector<int> &v)
{
  int low = 0 , mid = low , high = v.size() - 1;
  while (mid <= high)
  {
    if (v[mid] == 0)
    {
      swap(v[low], v[mid]);
      low++;
      mid++;
    }
    else if (v[mid] == 1)
      mid++;
    else
    {
      swap(v[mid], v[high]);
      high--;
    }
  }
}
// Optimal Dutch National Flag Algorithm
int main()
{
  vector<int> v = {0, 1, 2, 0, 1, 2, 1, 2, 0, 0, 0, 1};
  printList(v);
  sortArrayOptimal(v);
  printList(v);

  return 0;
}