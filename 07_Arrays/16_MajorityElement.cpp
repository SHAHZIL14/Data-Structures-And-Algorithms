#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &v)
{
  unordered_map<int, int> m;
  pair<int, int> majorityElement = {0, 0};
  for (auto it : v)
  {
    auto iterator = m.find(it);
    if (iterator != m.end())
    {
      m.at(it) += 1;
    }
    else
    {
      m.insert({it, 1});
    }
  }

  for (auto &it : m)
  {
    if (majorityElement.second < it.second)
    {
      majorityElement = it;
    }
  }

  return majorityElement.first;
}

int majorityElementOptimal(vector<int> &nums)
{
  int majorityElement = nums[0];
  int count = 1;
  for (int i = 1; i < nums.size(); i++)
  {
    if (count == 0)
    {
      majorityElement = nums[i];
      count++;
    }
    else
    {
      if (nums[i] == majorityElement)
      {
        count++;
      }
      else
      {
        count--;
      }
    }
  }
  return majorityElement;
}

int main()
{
  vector<int> v = {3, 2, 3};
  int majority = majorityElementOptimal(v);
  cout << majority;
  return 0;
}