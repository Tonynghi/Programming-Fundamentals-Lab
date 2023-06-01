#include <iostream>
using namespace std;

int **transposeMatrix(int **matrix, int r, int c)
{
  if (matrix == nullptr || (r == 0 && c == 0))
    return nullptr;

  int **newMatrix = new int *[c];
  for (int i = 0; i < c; i++)
  {
    newMatrix[i] = new int[r];
    for (int j = 0; j < r; j++)
      newMatrix[i][j] = matrix[j][i];
  }

  return newMatrix;
};

int main()
{
  return 0;
}
