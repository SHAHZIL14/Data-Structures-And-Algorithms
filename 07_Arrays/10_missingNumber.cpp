#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{
  int size = nums.size();
  int sum = 0;
  int numsSum = 0;
  for (int i = 0; i <= size; i++)
  {
    sum += i;
  }
  for (auto it : nums)
  {
    numsSum += it;
  }
  return sum - numsSum;
}

int main()
{
  vector<int> nums = {9,6,4,2,3,5,7,0,1};
  int missingNum = missingNumber(nums);
  cout<<missingNum;
  return 0;
}