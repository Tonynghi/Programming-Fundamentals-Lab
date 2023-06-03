/*
Một chuỗi được gọi là palindrome nếu chuỗi đó giống với chuỗi được đảo ngược từ chính nó. Ví dụ: “eye”, “noon”, “abcba”...

Hãy viết hàm kiểm tra xem một chuỗi có là palindrome hay không?

Đầu vào:
const char* str: chuỗi cần kiểm tra palindrome. str chỉ bao gồm chữ cái thường

Đầu ra:
bool: true nếu chuỗi str là palindrome, ngược lại false


For example:
Test	                        Result
const char* str = "abba";       1
cout << isPalindrome(str);

const char* str = "axz";        0
cout << isPalindrome(str);
*/

#include <iostream>

using namespace std;

bool isPalindrome(const char* str) {
    // Write your code here
    int size = 0;
    string istr = "";
    string inv_str = ""; 
    
    while(*str != '\0'){
        size++;
        istr += *str;
        str++;
    }
    
    for(int i = size - 1; i > -1; i--){
        inv_str += istr[i];
    }
    
    if(inv_str == istr) return true;
    else return false;
}

int main(){

    const char* str = "abba";
    cout << isPalindrome(str);

    return 0;
}