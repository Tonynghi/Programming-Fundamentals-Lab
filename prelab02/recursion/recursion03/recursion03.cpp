#include <iostream>
using namespace std;

void printPattern(int n)
{
    cout << n << " ";
    if (n <= 0)
    {
        n = n + 5;
        return;
    }
    printPattern(n - 5);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    printPattern(n);
    return 0;
}