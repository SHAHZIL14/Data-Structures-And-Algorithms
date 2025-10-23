#include <bits/stdc++.h>
using namespace std;
void printList(vector<vector<int>> &v)
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
void setrows(vector<vector<int>> &matrix, int rowNo)
{
  int size = matrix.size();
  for (int i = 0; i < size; i++)
  {
    matrix[rowNo][i] = 0;
  }
}

void setCols(vector<vector<int>> &matrix, int colNo)
{
  int size = matrix[0].size();
  for (int i = 0; i < size; i++)
  {
    matrix[i][colNo] = 0;
  }
}

void setMatrixZero(vector<vector<int>> &matrix)
{
  for (int i = 0; i < matrix.size(); i++)
  {

    for (int j = 0; j < matrix.size(); j++)
    {
      int currentElement = matrix[i][j];
      if (currentElement == 0)
      {
        for (int k = 0; k < matrix.size(); k++)
        {
          matrix[k][j] = -1;
        }

        for (int k = 0; k < matrix.size(); k++)
        {
          matrix[i][k] = -1;
        }
      }
    }
  }
  for (int i = 0; i < matrix.size(); i++)
  {
    for (int j = 0; j < matrix.size(); j++)
    {
      int currentElement = matrix[i][j];
      if (currentElement == -1)
      {
        matrix[i][j] = 0;
      }
    }
  }
}
void setMatrixZeroBetter(vector<vector<int>> &matrix)
{
  int n = matrix.size();
  int m = matrix[0].size();
  int rowHash[n] = {0};
  int colHash[m] = {0};
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      int currentElement = matrix[i][j];
      if (currentElement == 0)
      {
        rowHash[i] = 1;
        colHash[j] = 1;
      }
    }
  }
  
  for (int i = 0; i < n; i++)
  {
    if (i == 1)
    {
      setrows(matrix, i);
    }
  }

  for (int i = 0; i < m; i++)
  {
    if (i == 1)
    {
      setCols(matrix, i);
    }
  }
}
int main()
{
  vector<vector<int>> binaryMatrix = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
  printList(binaryMatrix);
  setMatrixZero(binaryMatrix);
  printList(binaryMatrix);

  return 0;
}