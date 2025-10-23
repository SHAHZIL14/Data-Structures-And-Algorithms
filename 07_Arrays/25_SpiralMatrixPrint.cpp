#include <bits/stdc++.h>
using namespace std;

// row = 3 col = 4 k = 0 1st iteration
// row = 3 col = 4 k = 1 2st iteration
vector<int> spiralPrint(vector<vector<int>>& matrix, int row, int column) {
  int top = 0, bottom = row - 1, left = 0, right = column - 1;
  vector<int> v;
  while (left <= right && top <= bottom) {
    for (int i = left; i <= right; i++) {
      v.push_back(matrix[top][i]);
    }
    top++;

    for (int i = top; i <= bottom; i++) {
      v.push_back(matrix[i][right]);
    }
    right--;

    for (int i = right; i >= left; i--) {
      v.push_back(matrix[bottom][i]);
    }
    bottom--;

    for (int i = bottom; i >= top; i--) {
      v.push_back(matrix[i][left]);
    }
    left++;
  }
  return v;
}

int main() {
  vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  spiralPrint(matrix, 3, 3);
  return 0;
}