#include <iostream>
using namespace std;

int **readArray()
{
    int **array = new int *[10];

    for (int row = 0; row < 10; row++)
    {
        array[row] = new int[10];
        for (int col = 0; col < 10; col++)
        {
            cin >> array[row][col];
            if (array[row][col] == 0)
            {
                for (int restCol = col + 1; restCol < 10; restCol++)
                    array[row][restCol] = 0;

                break;
            }
        }
    }

    return array;
};

int main()
{

    return 0;
}