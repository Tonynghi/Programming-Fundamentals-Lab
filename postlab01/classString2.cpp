/*
[Tiếng Việt ]
Viết chương trình tìm và trả về độ dài của chuỗi con dài nhất không có ký tự nào được lặp lại có trong s.

Đầu vào:
Chuỗi s.

Đầu ra:
Độ dài của chuỗi con dài nhất không có ký tự nào được lặp lại có trong s.

[English ]
Write a program find and return the length of the longest sub-string that doesn't have any repeated character in s.

Input:
String s.

Output:
Length of the longest sub-string that doesn't have any repeated character in s.
*/

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int longestSubstringLength(const string &s)
{
    int n = s.length();
    int maxLength = 0;
    int start = 0;
    unordered_map<char, int> charIndices;

    for (int i = 0; i < n; i++)
    {
        if (charIndices.find(s[i]) != charIndices.end() && start <= charIndices[s[i]])
        {
            start = charIndices[s[i]] + 1;
        }
        else
        {
            maxLength = max(maxLength, i - start + 1);
        }
        charIndices[s[i]] = i;
    }

    return maxLength;
}

int main()
{
    string s;
    cin >> s;

    int length = longestSubstringLength(s);

    cout << length << endl;

    return 0;
}
