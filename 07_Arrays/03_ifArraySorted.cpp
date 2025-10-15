#include <bits/stdc++.h>
using namespace std;

bool ifArraySorted(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    if (arr[i + 1] < arr[i])
      return false;
  }
  return true;
}
// BruteForce

int main()
{
  int arr[] = {1, 2, 3, 0};
  int size = 4;
  cout << ifArraySorted(arr, size);
  return 0;
}