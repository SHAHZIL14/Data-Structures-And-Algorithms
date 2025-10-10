#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << '\t';
  }
  cout << endl;
}

int partition(int arr[], int start, int end)
{
  int pivot = arr[start];
  int i = start+1;
  int j = end;
  while (i <= j)
  {
    while (arr[i] < pivot && i <= end )
      i++;
    while (arr[j] > pivot && j >= start )
      j--;
    if (i < j)
      swap(arr[i], arr[j]);
  }
  swap(arr[start], arr[j]);
  return j;
}

void quickSort(int arr[], int start, int end)
{
  if (start < end)
  {
    int mid = partition(arr, start, end);
    quickSort(arr, start, mid-1);
    quickSort(arr, mid + 1, end);
  }
}

int main()
{
  int arr[] = {6, 9, 1, 4, 10, 7, 2, 3, 5, 8};
  int size = 10;
  printArray(arr, size);
  quickSort(arr, 0, size - 1);
  printArray(arr, size);
  return 0;
}