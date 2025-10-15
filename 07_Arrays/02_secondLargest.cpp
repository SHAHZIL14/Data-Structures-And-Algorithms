#include <bits/stdc++.h>
using namespace std;
int secondLargest(int arr[],int size){
  int largest = arr[0];
  int secondLargest = -1;
  for(int i=1;i<size;i++){
    if(arr[i]>largest){
      secondLargest=largest;
      largest = arr[i];
    }
    else if( arr[i]<largest && arr[i]>secondLargest){
      secondLargest = arr[i];
    }
  }
  return secondLargest;
}
int main()
{
  int arr[] = {6, 9, 1, 4, 10, 7, 2, 3, 5, 8};
  int size = 10;
  cout<<secondLargest(arr,size);
  return 0;
}