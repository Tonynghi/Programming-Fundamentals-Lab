#include <iostream>
using namespace std;

int *zeros(int n)
{
    // TODO
    if (n <= 0)
    {
        return NULL;
    }
    else
    {
        int *arr = new int[n];

        for (int i = 0; i < n; i++)
        {
            arr[i] = 0;
        }
        return arr;
    }
}

int main()
{
    // Test the function by creating an array of size 5
    int n = -2;
    int *arr = zeros(n);

    // Print the contents of the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free the memory allocated for the array
    delete[] arr;

    return 0;
}