#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << "\t";
  }
  cout << endl;
};

void insertionSort(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    int j = i;
    while (j > 0 && arr[j] < arr[j - 1])
    {
      int temp = arr[j - 1];
      arr[j - 1] = arr[j];
      arr[j] = temp;
      j--;
    }
  }
}

int main()
{
  int arr[] = {6, 9, 1, 4, 10, 7, 2, 3, 5, 8};
  int size = 10;
  printArray(arr, size);
  insertionSort(arr, size);
  printArray(arr, size);
  return 0;
}