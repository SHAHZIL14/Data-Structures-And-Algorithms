#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  // s = "abcddcbab"

  cout<<"Enter the string:";
  cin>>s;
  // input 

  unordered_map<int,int> store;
  for(int i=0;i<s.size();i++){
    store[s[i]]++;
  }
  // prestore

  for(auto it : store){
    cout<<char(it.first)<<"->"<<it.second<<endl;
  }
  // iterate the map
  int q;
  cout<<"Enter how many character you want frequency of:";
  cin>>q;
  while(q--){
    char c;
    cout<<"Enter character:";
    cin>>c;
    cout<<store[c]<<endl;
  }
  // Fetching
  return 0;
}