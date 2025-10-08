#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}
int reverseArray(int arr[], int i, int j)
{
  int size = j + 1;
  if (size % 2 == 0)
  {
    if (j < i)
      return 0;
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    reverseArray(arr, i + 1, j - 1);
  }
  else
  {
    if (i == int(size / 2))
      return 0;
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    reverseArray(arr, i + 1, j - 1);
  }
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6};
  int size = 6;
  cout << "Before recursion : ";
  printArray(arr, size);
  reverseArray(arr, 0, size - 1);
  cout << endl;
  cout << "Before recursion : ";
  printArray(arr, size);
  return 0;
}