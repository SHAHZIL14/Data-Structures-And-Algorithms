#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[],int size){
  for(int i=0;i<size;i++){
    cout<<arr[i]<<"\t";
  }
  cout<<endl;
}
void selectionSort(int arr[], int size)
{
  for (int i = 0; i < size-1; i++)
  {
    int smallest =arr[i];
    for(int j=i+1;j<size;j++){
      if(arr[j]<arr[i]) swap(arr[i],arr[j]);
    }
  }
}
int main()
{
  int arr[] = {6, 9, 1, 4, 10, 7, 2, 3, 5, 8};
  int size = 10;
  printArray(arr,size);
  selectionSort(arr,size);
  printArray(arr,size);
  return 0;
}