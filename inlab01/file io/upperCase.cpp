/*
Viết hàm void uppercase(string output) để đọc vào chuỗi S từ bàn phím, sau đó chuyển tất các ký tự trong chuỗi S thành ký tự viết HOA và xuất kết quả ra file output.

Chú ý: chỉ thay đổi các chữ cái in thường, các kí tự khác sẽ được giữ nguyên.

Đầu vào:
Biến "output" chứa tên file dùng để xuất kết quả.

Đầu ra:
Hàm đọc chuỗi S từ bàn phím và xử lý chuỗi như mô tả. Sau đó ghi chuỗi đã xử lý vào file có tên được chứa trong biến “output” (hàm không trả về kết quả).

For example:
Test	Input	    Result
1       heLlO10     HELLO10
*/

#include <iostream>
#include <fstream>

using namespace std;

void uppercase(string output)   {
    // TODO
    string str;
    cin >> str;
    
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] >= 97 && str[i] <= 122){
            str[i] -= 32;
        }
        i++;
    }
    
    ofstream ofs(output);
    
    ofs << str;
}

int main(){

    string output = "test";

    uppercase(output);

    return 0;
}