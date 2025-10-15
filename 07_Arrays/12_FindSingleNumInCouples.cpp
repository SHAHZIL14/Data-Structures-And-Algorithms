#include <bits/stdc++.h>
using namespace std;

int findSingleNumberInCoupled(vector<int> &v)
{
  sort(v.begin(), v.end());
  for (int i = 0; i < v.size(); i++)
  {
    if (v[i] == v[i + 1] && i != v.size() - 1)
    {
      i++;
    }
    else return v[i];
  }
  return 0;
}
// BruteForce

// int findSingleNumberInCoupled(vector<int> &v)
// {
//   int zor = 0;
//   for (auto it : v)
//   {
//     zor ^= it;
//   }
//   return zor;
// }
// Optimal
int main()
{
  vector<int> nums = {1, 1, 2, 2, 4};
  cout << findSingleNumberInCoupled(nums);
  return 0;
}