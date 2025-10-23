#include <bits/stdc++.h>
using namespace std;
pair<int, int> twoSum(vector<int> &v, int k)
{
  int n = v.size();
  pair<int, int> p;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (v[i] + v[j] == k)
      {
        p = {i, j};
        return p;
      }
    }
  }
  return p;
}
// BruteForce

pair<int, int> twoSumBetter(vector<int> &v, int k)
{
  map<int, int> m;
  for (int i = 0; i < v.size(); i++)
  {
    int rem = k - v[i];
    auto it = m.find(rem);
    if (it != m.end())
      return {i, it->second};
    else
      m.insert({v[i], i});
  }
  return {0, 0};
}

// Better
pair<int, int> twoSumOptimal(vector<int> &v, int k)
{
  int i = 0;
  int j = v.size() - 1;
  vector<pair<int, int>> vp;
  for (int i = 0; i < v.size(); i++)
  {
    vp.push_back({v[i], i});
  }
  sort(vp.begin(), vp.end());
  while (i < j)
  {
    int sum = vp[i].first + vp[j].first;
    if (sum == k)
    {
      return {vp[i].second, vp[j].second};
    }
    else if (sum > k) j--;
    else i++;
  }
  return {0,0};
}
// Optimal

int main()
{
  vector<int> v = {2, 6, 5, 8, 11};
  // vector<int> v = {2, 5, 6, 8, 11};
  pair<int, int> p = twoSumBetter(v, 14);
  cout << p.first << " " << p.second << endl;
  return 0;
}