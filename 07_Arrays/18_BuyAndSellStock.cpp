#include <bits/stdc++.h>
using namespace std;

pair<int, int> buyAndSellStocks(vector<int> &nums)
{
  int buy = 0;
  int sell = 0;
  int profit = 0;
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] < nums[buy])
      buy = i;
    if ( buy != i)
    {
      if (nums[i] - nums[buy] > profit)
      {
        profit = nums[i] - nums[buy];
        sell = i;
      }
    }
  }
  return {buy,sell};
}

int main()
{
  vector<int> nums = {7, 1, 5, 3, 6, 4};
  pair<int,int>p = buyAndSellStocks(nums);
  cout<<p.first<<"->"<<p.second<<endl;
  return 0;
}