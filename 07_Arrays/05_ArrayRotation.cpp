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

void rotateArray(int arr[], int size, int index)
{
  if (size <= 0 || index <= 0)
    return;
  index = index % size;
  int temp[index];
  for (int i = 0; i < index; i++)
  {
    temp[i] = arr[i];
  }
  for (int i = 0; i < size - index; i++)
  {
    arr[i] = arr[i + index];
  }
  for (int i = 0; i < index; i++)
  {
    arr[size - index + i] = temp[i];
  }
}
// BruteForce

void rotateArrayOptimally(int arr[], int size, int index){
  if(index<=0 || size<=0) return;
  index = index%size;
  reverse(arr,arr+index);
  reverse(arr+index,arr+size);
  reverse(arr,arr+size);
}
// Optimal
int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int size = 5;
  printArray(arr, size);
  rotateArray(arr, size, 3);
  printArray(arr, size);

  return 0;
}