#include <bits/stdc++.h>
using namespace std;
pair<int, int> maximumSubArraySum(vector<int> &v)
{
  pair<int, pair<int, int>> maxSumArray = {0, {0, 0}};
  for (int i = 0; i < v.size(); i++)
  {
    for (int j = i; j < v.size(); j++)
    {
      int sum = 0;
      for (int k = i; k <= j; k++)
      {
        sum += v[k];
      }
      if (sum > maxSumArray.first)
      {
        maxSumArray = {sum, {i, j}};
      }
    }
  }
  return maxSumArray.second;
}
// BruteForce

int maximumSubArraySumBetter(vector<int> &v)
{
  int sum = 0;
  for (int i = 0; i < v.size(); i++)
  {

    for (int j = i; j < v.size(); j++)
    {
      sum += v[j];
    }
  }
  return sum;
}
// Better

int KadanesAlgorithm(vector<int> &v)
{
  int sum = 0;
  int max = INT_MIN;
  for (int i = 0; i < v.size(); i++)
  {
    if (sum + v[i] > 0)
    {
      sum += v[i];
      if (sum > max)
        max = sum;
    }
  }
  return max;
}
// Optimal Kadane's Algorithm
int main()
{
  vector<int> v = {-2, -3, 4, -1, -2, 1, 5, -3};
  int maxSumArray = KadanesAlgorithm(v);
  cout << maxSumArray;
  return 0;
}