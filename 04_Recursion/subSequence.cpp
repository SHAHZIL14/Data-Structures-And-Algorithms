#include <bits/stdc++.h>
using namespace std;
void printVector(vector<int> v)
{
  for (int i : v)
  {
    cout << i << " ";
  }
  cout << endl;
}
void subSequence(int index, vector<int> v, vector<int> sample)
{
  if (index >= v.size())
  {
    printVector(sample);
    return;
  }
  sample.push_back(v[index]);
  subSequence(index + 1, v, sample);
  sample.pop_back();
  subSequence(index + 1, v, sample);
}
int main()
{
  vector<int> sample;
  vector<int> v = {1,2,3,4,5};
  subSequence(0, v, sample);
  return 0;
}