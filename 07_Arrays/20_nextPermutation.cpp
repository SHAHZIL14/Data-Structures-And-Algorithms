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

void nextPermutation(vector<int> &nums)
{
  // Find breaking point

  int breakingPoint = -1;
  int smallestInRight = -1;
  for (int i = nums.size() - 2; i >= 0; i--)
  {
    if (nums[i] < nums[i + 1])
    {
      breakingPoint = i;
      break;
    }
  }
  // Swap the least element in the right half of the vector wiht the element just before breaking point

  if (breakingPoint == -1)
  {
    reverse(nums.begin(), nums.end());
    return;
  }

  for (int i = nums.size() - 2; i > breakingPoint; i--)
  {
    if (nums[i] < nums[i + 1])
      smallestInRight = i;
  }
  swap(nums[breakingPoint], nums[smallestInRight]);

  // Reverse the vector
  reverse(nums.begin() + breakingPoint + 1, nums.end());
}
int main()
{
  vector<int> nums = {3, 1, 2};
  printList(nums);
  nextPermutation(nums);
  printList(nums);

  return 0;
}