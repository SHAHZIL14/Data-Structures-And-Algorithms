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

// vector<int> longestSubArray(vector<int> &v, int num)
// {
//   multimap<int, int> m;
//   vector<int> p;
//   int right = 0;
//   int left = 0;
//   for (int i = 0; i < v.size(); i++)
//   {
//     for (int j = i; j < v.size(); j++)
//     {
//       int sum = 0;
//       for (int k = i; k <= j; k++)
//       {
//         sum += v[k];
//       }
//       if (sum == num)
//       {
//         m.insert({i, j});
//       }
//     }
//   }
//   for (auto it : m)
//   {
//     int difference = it.second - it.first;
//     int largestDifference = right - left;
//     if (difference > largestDifference)
//     {
//       left = it.first;
//       right = it.second;
//     }
//   }
//   for (int i = left; i <= right; i++)
//   {
//     p.push_back(v[i]);
//   }
//   return p;
// }
// BruteForce

int longestSubArray(vector<int> &v, int num)
{
  int left = 0;
  int right = 0;
  long long sum = 0;
  int maxLen = 0;
  int n = v.size();
  while (left < n && right < n)
  {
    while (sum > num && left <= right)
    {
      sum -= v[left];
      left++;
    }
    if (sum == num)
    {
      maxLen = max(maxLen, right - left + 1);
    }
    right++;
    if (right < n && sum < num)
      sum += v[right];
  }
  return maxLen;
}
// Optimal
int main()
{
  vector<int> nums = {1, 2, 3, 1, 1, 1, 4, 2, 3};
  int len = longestSubArray(nums, 10);
  cout << len;
  return 0;
}