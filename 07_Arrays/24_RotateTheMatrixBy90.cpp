#include <bits/stdc++.h>
using namespace std;
void printMatrix(vector<vector<int>> &v)
{
  for (int i = 0; i < v.size(); i++)
  {
    for (int j = 0; j < v.size(); j++)
    {
      cout << v[i][j] << " ";
    }
    cout << endl;
  }

  cout << endl;
}

void printList(vector<int> &v)
{
  for (auto it : v)
  {
    cout << it << " ";
  }
  cout << endl;
}

void transposeTheMatrix(vector<vector<int>> &matrix)
{
  int n = matrix.size();
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i + j > 2 * i)
      {
        swap(matrix[i][j], matrix[j][i]);
      }
    }
  }
  return;
}

void rotateTheMatrixBy90(vector<vector<int>> &matrix)
{
  if (matrix.empty())
    return;
  transposeTheMatrix(matrix);
  for (int row = 0; row < matrix.size(); row++)
    reverse(matrix[row].begin(), matrix[row].end());
  return;
}

int main()
{
  vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  printMatrix(matrix);
  rotateTheMatrixBy90(matrix);
  printMatrix(matrix);

  return 0;
}