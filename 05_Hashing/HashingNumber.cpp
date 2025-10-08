#include <bits/stdc++.h>
using namespace std;
void printList(vector<int> v)
{
  for (int i : v)
  {
    cout << i << "\t";
  }
  return;
}
vector<int> preStore(vector<int> &v, int n)
{
  vector<int> store(n, 0);
  for (int i : v)
  {
    store[i - 1]++;
  }
  return store;
}

vector<int> getFrequency(vector<int> &store, vector<int> &numbers)
{
  vector<int> frequency;
  for (int num : numbers)
  {
    frequency.push_back(store[num - 1]);
  }
  return frequency;
}
int main()
{
  vector<int> v = {1, 2, 3, 3, 2, 1, 2, 1, 3, 2, 3, 4, 5};
  int n = 5;
  vector<int> store = preStore(v, n);
  vector<int> numbers;
  for (int i = 0 ; i<n;i++){
    int num;
    cout<<"Enter the num you want to get the frequency of:";
    cin>>num; 
  }
    return 0;
}