#include <iostream>
using namespace std;

/*
Given a dynamic two-dimensional array of size r x c. Implement the function void insertRow(int**& matrix, int r, int c, int* rowArr, int row) that can insert the rowArr array (with the size c) into the row position, row, of the matrix.

Input: The two-dimensional matrix of size r x c, the insert row rowArr and the insert position row.

Output: The two-dimensional matrix after insert.
*/

void insertRow(int **&matrix, int r, int c, int *rowArr, int row)
{
    // Allocate memory for a new matrix with an additional row
    int **newMatrix = new int *[r + 1];
    for (int i = 0; i < r + 1; i++)
    {
        newMatrix[i] = new int[c];
    }

    // Copy the rows before the insertion point
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < c; j++)
        {
            newMatrix[i][j] = matrix[i][j];
        }
    }

    // Copy the inserted row
    for (int j = 0; j < c; j++)
    {
        newMatrix[row][j] = rowArr[j];
    }

    // Copy the rows after the insertion point
    for (int i = row; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            newMatrix[i + 1][j] = matrix[i][j];
        }
    }

    // Deallocate memory for the original matrix
    for (int i = 0; i < r; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;

    // Update the pointer to the new matrix
    matrix = newMatrix;
}

int main()
{

    cout << endl;
    return 0;
}