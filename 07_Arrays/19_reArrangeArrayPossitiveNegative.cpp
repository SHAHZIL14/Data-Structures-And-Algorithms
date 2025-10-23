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

vector<int> arrangeTheArray(vector<int> &nums)
{
  vector<int> last;
  vector<int> positive;
  vector<int> negative;
  int i = 0, j = 0, k = 0;

  for (auto it : nums)
  {
    if (it < 0)
      negative.push_back(it);
    else
      positive.push_back(it);
  }

  while (i < positive.size() || j < negative.size())
  {
    if (k % 2 == 0)
    {
      last.push_back(positive[i]);
      i++;
    }
    else
    {
      last.push_back(negative[j]);
      j++;
    }
    k++;
  }
  return last;
}

vector<int> arrangeTheArrayOptimal(vector<int> &nums)
{
  vector<int> v(nums.size());
  int posIndex = 0;
  int negIndex = 1;
  for (auto &it : nums)
  {
    if (it > 0)
    {
      v[posIndex] = it;
      posIndex += 2;
    }
    else
    {
      v[negIndex] = it;
      negIndex +=2;
    }
  }
  return v;
}
// Optimal
int main()
{
  vector<int> nums = {3, 1, -2, -5, 2, -4};
  vector<int> newNums = arrangeTheArrayOptimal(nums);
  // printList(nums);
  printList(newNums);
  //[3,-2,1,-5,2,-4]
  return 0;
}