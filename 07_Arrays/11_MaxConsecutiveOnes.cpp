#include <bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(vector<int> &nums)
{
  int maximum = 0;
  int count = 0;
  for (auto it : nums)
  {
    if (it == 1)
      count++;
    else
      count = 0;

    if (count > maximum)
      maximum = count;
  }
  return maximum;
}
int main()
{
  vector<int> nums = {1, 1, 0, 1, 1, 1};
  cout<<findMaxConsecutiveOnes(nums);
  return 0;
}