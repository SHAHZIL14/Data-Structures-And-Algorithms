#include <iostream>
using namespace std;
void sideTriangle(int n)
{
  //upper triangle
  for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
      cout<<" *";
    }
    cout<<endl;
  }
  //lower trianle
  for(int i=0;i<n-1;i++){
    for(int j=i;j<n-1;j++){
      cout<<" *";
    }
    cout<<endl;
  }
}
int main()
{
  int n;
  cout << "Enter the value of n:";
  cin >> n;
  sideTriangle(n);
  return 0;
}