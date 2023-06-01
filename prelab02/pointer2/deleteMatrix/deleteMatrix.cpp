#include <iostream>
using namespace std;

void deleteMatrix(int **&matrix, int r)
{
    for (int i = 0; i < r; i++)
    {
        delete[] matrix[i];
    }

    delete[] matrix;

    matrix = NULL;
}

int main()
{

    cout << endl;
    return 0;
}