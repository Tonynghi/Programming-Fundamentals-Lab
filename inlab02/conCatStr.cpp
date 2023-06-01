#include <iostream>
using namespace std;

char *concatStr(char *str1, char *str2)
{
    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0')
        len1++;
    while (str2[len2] != '\0')
        len2++;

    char *merged = new char[len1 + len2 + 1];
    int i = 0;
    for (; i < len1; i++)
        merged[i] = str1[i];

    for (int j = 0; j < len2; j++)
        merged[i++] = str2[j];

    merged[i] = '\0';
    return merged;
}

int main()
{
    char s1[] = "Hello, ";
    char s2[] = "how are you?";
    char *s = concatStr(s1, s2);
    cout << s;
    delete[] s;
    return 0;
}
