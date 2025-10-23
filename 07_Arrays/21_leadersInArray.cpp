#include <bits/stdc++.h>
using namespace std;

void printList(vector<int> &v)
{
  for (auto it : v)
  {
    cout << it << '\t';
  }
  cout << endl;
}

vector<int> leadersInArray(vector<int> &nums)
{
  vector<int> leaders;
  for (int i = nums.size() - 2; i > 0; i--)
  {
    bool leader = true;
    for (int j = i + 1; j < nums.size(); j++)
    {
      if (nums[i] < nums[j])
      {
        leader = false;
        break;
      }
    }
    if (leader)
    {
      leaders.push_back(nums[i]);
    }
  }
  leaders.push_back(nums[nums.size() - 1]);
  return leaders;
}

vector<int> leadersInArrayBetter(vector<int> &arr)
{
  int maximum = INT_MIN;
  int n = arr.size();
  vector<int> leaders;
  for (int i = n - 1; i >= 0; i--)
  {
    if (arr[i] > maximum)
    {
      leaders.push_back(arr[i]);
    }
    maximum = max(maximum, arr[i]);
  }
  sort(leaders.begin(),leaders.end());
  return leaders;
}

int main()
{
  vector<int> nums = {10,22,12,3,0,6};
  vector<int> leaders = leadersInArrayBetter(nums);
  printList(leaders);
  return 0;
}