#include <iostream>
using namespace std;

bool checkDuplicate(int *ar, int size)
{
    if (size < 2)
        return true;

    for (int i = 0; i < size - 1; i++)
    {
        if (ar[size - 1] == ar[i])
        {
            return false;
        }
    }

    return checkDuplicate(ar, size - 1);
}

int main()
{

    return 0;
}