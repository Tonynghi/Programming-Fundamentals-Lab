/*
[Tiếng Việt]
Viết chương trình đọc vào chuỗi s từ bàn phím, tìm và trả về chuỗi con có tính chất đối xứng dài nhất có trong s.

Đầu vào:
Chuỗi s.

Đầu ra:
Chuỗi con có tính chất đối xứng dài nhất có trong s. Trong trường hợp có nhiều chuỗi con dài nhất có cùng độ dài, trả về chuỗi con có vị trí bắt đầu nhỏ nhất.


[English ]
Write a program read an s string from keyboard, find and return the longest symetrical sub-string of s.

Input:
String s.

Output:
The longest symmetrical sub-string from s. In case where there are more than one highest string, return the string with the smallest starting character index.
*/

#include <iostream>
#include <string>

using namespace std;

string findLongestSymmetricalSubstring(const string &s)
{
    int n = s.length();
    int maxLen = 0;
    int start = 0;

    for (int i = 0; i < n; i++)
    {
        // Check for odd-length palindromes
        int left = i, right = i;
        while (left >= 0 && right < n && s[left] == s[right])
        {
            if (right - left + 1 > maxLen)
            {
                maxLen = right - left + 1;
                start = left;
            }
            left--;
            right++;
        }

        // Check for even-length palindromes
        left = i;
        right = i + 1;
        while (left >= 0 && right < n && s[left] == s[right])
        {
            if (right - left + 1 > maxLen)
            {
                maxLen = right - left + 1;
                start = left;
            }
            left--;
            right++;
        }
    }

    return s.substr(start, maxLen);
}

int main()
{
    string s;
    cin >> s;

    string longestSubstring = findLongestSymmetricalSubstring(s);

    cout << longestSubstring << endl;

    return 0;
}
