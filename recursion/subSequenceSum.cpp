#include <bits/stdc++.h>
using namespace std;
void printList(vector<int> v)
{
  for (int i : v)
  {
    cout << i << " ";
  }
  cout << endl;
}
bool subSequenceSum(int index, vector<int> &v, vector<int> &sample, int k)
{
  if (index >= v.size())

  {
    int sum = 0;
    for (int i : sample)
    {
      sum = sum + i;
    }
    if (sum == k)
    {
      printList(sample);
      return true;
    }
    return false;
  }
  sample.push_back(v[index]);
  if (subSequenceSum(index + 1, v, sample, k))
    return true;
  sample.pop_back();
  if (subSequenceSum(index + 1, v, sample, k))
    return true;
  return false;
}
int main()
{
  vector<int> v = {1, 2, 3, 4, 5};
  vector<int> sample;
  int k = 10;
  subSequenceSum(0, v, sample, k);
  return 0;
}