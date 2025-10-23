#include <bits/stdc++.h>
using namespace std;

void print2DVector(const vector<vector<int>>& v) {
  for (const auto& row : v) {     // iterate over each row
    for (const auto& val : row) { // iterate over each element in the row
      cout << val << " ";
    }
    cout << endl;
  }
}

vector<vector<int>> PascalsTriangle(int n) {
  vector<vector<int>> v(n);
  for (int i = 0; i < n; i++) {
    v[i].push_back(1);
    for (int j = 1; j < i; j++) {
      v[i].push_back(v[i - 1][j - 1] + v[i - 1][j]);
    }
    if (i > 0)
      v[i].push_back(1);
  }
  return v;
}

int main() {
  int n;
  cout << "Enter the value of n:";
  cin >> n;
  vector<vector<int>> triangle = PascalsTriangle(n);
  print2DVector(triangle);
  return 0;
}