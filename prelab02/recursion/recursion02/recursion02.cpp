#include <iostream>
using namespace std;

int strLen(char *str)
{
    if (*str == '\0')
    {
        return 0;
    }
    char *next = str + 1;
    int lengthOfRest = strLen(next);
    return 1 + lengthOfRest;
}

int main()
{
    char str[] = "Truong DH Bach Khoa";
    cout << strLen(str);

    cout << endl;
    return 0;
}