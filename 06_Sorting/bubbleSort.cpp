#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[],int size){
  for(int i=0;i<size;i++){
    cout<<arr[i]<<"\t";
  }
  cout<<endl;
}

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int size)
{
    for (int k = 0; k < size - 1; k++)
    {
        bool swapped = false;

        for (int i = 0; i < size - k - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

int main()
{
  int arr[] = {6, 9, 1, 4, 10, 7, 2, 3, 5, 8};
  int size = 10;
  printArray(arr,size);
  bubbleSort(arr,size);
  printArray(arr,size);
  return 0;
}