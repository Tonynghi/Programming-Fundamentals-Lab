#include <iostream>
#include <string>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
using namespace std;

/* END of library */

int gcdRecursion(int p, int q)
{
    // BEGIN YOUR IMPLEMENTATION [1]
    // TODO
    if (q == 0)
    {
        return p;
    }
    else
    {
        return gcdRecursion(q, p % q);
    }

    // END YOUR EMPLEMENTATION [1]
}

int gcdIteration(int p, int q)
{
    // BEGIN YOUR IMPLEMENTATION [2]
    // TODO
    while (q != 0)
    {
        int temp = q;
        q = p % q;
        p = temp;
    }
    return p;
    // END YOUR EMPLEMENTATION [2]
    return 0;
}

int main()
{
    int p, q;
    cin >> p >> q;
    cout << gcdRecursion(p, q) << " " << gcdIteration(p, q);
    return 0;
}