#include <bits/stdc++.h>
using namespace std;

int largestElement(int arr[], int n)
{
  int i = 0;
  int j = n - 1;
  int largest = 0;
  while (i < j)
  {
    if (arr[i] > arr[j])
    {
      largest = arr[i];
      j--;
    }
    else
    {
      largest = arr[j];
      i++;
    }
  }
  return largest;
}

int main()
{
  int arr[] = {6, 9, 1, 4, 10, 7, 2, 3, 5, 8};
  int size = 10;
  cout << largestElement(arr, size);
  return 0;
}