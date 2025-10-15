#include <bits/stdc++.h>
using namespace std;
void printArray(vector<int> &v)
{
  for (int value : v)
  {
    cout << value << " ";
  }
  cout << endl;
}

void moveZeroes(vector<int> &v)
{
  if (v.empty())
    return;
  int zeroes = 0;
  vector<int> temp;
  for (int value : v)
  {
    if (value == 0)
      zeroes++;
    else
    {
      temp.push_back(value);
    }
  }
  for (int idx = 0; idx < zeroes; idx++)
  {
    temp.push_back(0);
  }
  v = temp;
}
// BruteForce

void moveZeroesOptimal(vector<int> &v) {
    int j = 0; 
    for(int i = 0; i < v.size(); i++) {
        if(v[i] != 0) {
            swap(v[i], v[j]);
            j++;
        }
    }
}

int main()
{
  vector<int> v = {4, 0, 7, 2, 0, 9, 0, 1, 5, 0, 8, 3, 0, 6, 2, 0, 7, 4, 0, 1};
  printArray(v);
  moveZeroes(v);
  printArray(v);

  return 0;
}