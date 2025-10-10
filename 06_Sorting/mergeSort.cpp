#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << ' ';
  }
  cout << endl;
}

void merge(int arr[], int start, int mid, int end)
{
  vector<int> temp;
  int left = start;
  int right = mid + 1;
  while (left <= mid && right <= end)
  {
    if (arr[left] < arr[right])
    {
      temp.push_back(arr[left]);
      left++;
    }
    else
    {
      temp.push_back(arr[right]);
      right++;
    }
  }

  while (left <= mid)
  {
    temp.push_back(arr[left]);
    left++;
  }

  while (right <= end)
  {
    temp.push_back(arr[right]);
    right++;
  }

  for (int i = start; i <= end; i++)
  {
    arr[i] = temp[i - start];
  }
}

void divide(int arr[], int start, int end)
{
  if (start >= end)
    return;
  int mid = (start + end) / 2;
  divide(arr, start, mid);
  divide(arr, mid + 1, end);
  merge(arr, start, mid, end);
}

void mergeSort(int arr[], int start, int end)
{
  divide(arr, start, end);
}

int main()
{
  int arr[] = {6, 9, 1, 4, 10, 7, 2, 3, 5, 8};
  int size = 10;
  printArray(arr, size);
  mergeSort(arr, 0, size - 1);
  printArray(arr, size);
  return 0;
}