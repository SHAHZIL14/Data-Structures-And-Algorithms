#include <bits/stdc++.h>
using namespace std;
void printList(int v[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
}
bool linearSearch(vector<int> &nums, int k)
{
  for (auto &it : nums)
  {
    if (it == k)
      return true;
  }
  return false;
}

int longestConsecutiveSequence(vector<int> &nums)
{
  int longest = 1;
  for (int i = 0; i < nums.size(); i++)
  {
    int x = nums[i];
    int count = 0;
    while (linearSearch(nums, nums[x + 1]))
    {
      x++;
      count++;
    }
    longest = max(longest, count);
  }
  return longest;
}

int longestConsecutiveSequenceBetter(vector<int> &nums)
{
  int longest = 0;
  int count = 0;
  if (nums.empty())
    return 0;
  sort(nums.begin(), nums.end());
  for (int i = 1; i < nums.size() ; i++)
  {
    if (nums[i] == nums[i - 1] + 1)
      count++;
    else if (nums[i] == nums[i - 1])
    {
      longest = max(longest, count);
      count = 1;
    }
  }
  return longest = max(longest, count);
}

int main()
{
  vector<int> nums = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
  int longestSequence = longestConsecutiveSequence(nums);
  cout << longestSequence;
  return 0;
}