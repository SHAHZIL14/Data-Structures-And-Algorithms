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

int removeDuplicates(vector<int> &v)
{
  if (v.empty())
    return 0;
  int i=0;
  for(int j=1;j<v.size();j++){
    if(v[i]!=v[j]){
      v[i+1] = v[j];
      i++;
    }
  }
  v.resize(i+1);
  return i+1;
}

int main()
{
  vector<int> v = {1, 1, 2, 2, 3, 4, 4, 5, 5, 5};
  printArray(v);
  removeDuplicates(v);
  printArray(v);

  return 0;
}