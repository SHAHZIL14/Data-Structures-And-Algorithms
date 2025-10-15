#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[],int size,int item){
  for(int i=0;i<size;i++){
    if(item == arr[i]) return i;
  }
}
int main() {
  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  int size = 10; 
  cout<<linearSearch(arr,size,4);
  return 0;
}