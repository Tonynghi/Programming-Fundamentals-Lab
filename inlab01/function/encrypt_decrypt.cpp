/*
Viết hàm để mã hóa và giải mã một đoạn text theo phương pháp Caesar Cipher. Để mã hoá và giải mã một chuỗi ký tự text, ta cần một tham số có giá trị nguyên là shift.

Hàm mã hóa sẽ thay đổi từng chữ cái trong text bằng cách dịch chuyển chữ cái đó sang phải shift lần trong bảng chữ cái. Ví dụ với shift = 3. Khi đó 'a' được mã hoá thành 'd', 'b' được mã hoá thành 'e',... 'z' được mã hoá thành 'c'

Hàm giải mã sẽ nhận một chuỗi ký tự text và giá trị nguyên shift và giải mã chuỗi ký tự này thành chuỗi ban đầu (tức dịch chuyển từng chữ cái sang trái shift lần trong bảng chữ cái)

Đầu vào:
char* text: chuỗi ký tự cần được mã hoá hoặc giải mã, chỉ bao gồm chữ cái thường và hoa
int shift: giá trị dịch chuyển trong Caesar Cipher

For example:
Test	                                        Input	            Result
int n, shift;                                   6 3                 dfcGBC
cin >> n >> shift;                              aczDYZ              aczDYZ
char* text = new char[n+1];
for(int i = 0; i < n; i++) cin >> text[i];
text[n] = 0;

encrypt(text, shift);
cout << text << '\n';
decrypt(text, shift);
cout << text;

delete[] text;
****

int n, shift;                                   16 25               oqnfqzllhmfhretm
cin >> n >> shift;                              programmingisfun    programmingisfun
char* text = new char[n+1];
for(int i = 0; i < n; i++) cin >> text[i];
text[n] = 0;

encrypt(text, shift);
cout << text << '\n';
decrypt(text, shift);
cout << text;

delete[] text;
****
*/

#include <iostream>

using namespace std;

void encrypt(char* text, int shift) {
    // Write your code 
    shift = shift % 26;
    
    while(*text != '\0'){
        if(*text > 64 && *text < 91){
            if(*text + shift > 90) *text = *text - 26 + shift;
            else if(*text + shift < 65) *text = *text + 26 + shift;
            else *text += shift;
        } else {
            if(*text + shift > 122) *text = *text - 26 + shift;
            else if(*text + shift < 97) *text = *text + 26 + shift;
            else *text += shift;
        }
        text++;
    }
}

void decrypt(char* text, int shift) {
    // Write your code
    shift = shift % 26;
    
    while(*text != '\0'){
        if(*text > 64 && *text < 91){
            if(*text - shift < 65) *text = *text + 26 - shift;
            else if(*text - shift > 90) *text = *text + 26 - shift;
            else *text -= shift;
        } else {
            if(*text - shift < 97) *text = *text + 26 - shift;
            else if(*text - shift > 122) *text = *text + 26 - shift;
            else *text -= shift;
        }
        text++;
    }
}

int main(){

    int n, shift; 
    cin >> n >> shift;
    char* text = new char[n+1];
    for(int i = 0; i < n; i++) cin >> text[i];
    text[n] = 0;

    encrypt(text, shift);
    cout << text << '\n';
    decrypt(text, shift);
    cout << text;

    delete[] text;

    return 0;
}