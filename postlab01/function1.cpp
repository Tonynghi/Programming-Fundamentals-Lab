/*
[Tiếng Việt]

Viết hàm tìm chữ cái xuất hiện nhiều lần nhất trong một chuỗi và số lần xuất hiện của chữ cái đó. Nếu có nhiều chữ cái thỏa mãn, xác định chữ cái có thứ tự alphabet nhỏ nhất.

Đầu vào:

const char* str: chuỗi ký tự đang xét, chỉ bao gồm chữ cái thường và hoa
Đầu ra:

char& res: chữ cái xuất hiện nhiều lần nhất trong chuỗi str
int& freq: số lần xuất hiện của chữ cái đó
Chú ý: tham số res là chữ cái thường. Chữ cái viết hoa strong str cũng được tính là giống chữ cái viết thường (VD "aA" chứa hai ký tự 'a')



[English]

Write a function that finds the most frequent character in a given string and how many times that character appears. If there are multiple characters satisfy the condition, find the one with the lowest alphabetical order.

Input:

const char* str: the input string, contains only lowercase and uppercase ASCII letters
Output:

char& res: the most frequent character in str
int& freq: the times that the result character appears in the string
Note: return res as a lowercase letter. Uppercase letters in str is also counted as lowercase letters (e.g the string "aA" contains two letter 'a')

Test	                                    Input	        Result
int n;                                      7               a 2
cin >> n;                                   aCxAboc
char* str = new char[n+1];
for(int i = 0; i < n; i++) cin >> str[i];
str[n] = 0;
char res = 0;
int freq = 0;
mostFrequentCharacter(str, res, freq);
cout << res << ' ' << freq;
delete[] str;


int n;                                      6               b 1
cin >> n;                                   OmnPqB
char* str = new char[n+1];
for(int i = 0; i < n; i++) cin >> str[i];
str[n] = 0;
char res = 0;
int freq = 0;
mostFrequentCharacter(str, res, freq);
cout << res << ' ' << freq;
delete[] str;
*/