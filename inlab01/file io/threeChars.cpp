/*
Viết hàm void threeChars(string fileName) đọc vào các hàng từ một file có đuôi txt, mỗi hàng chứa một chuỗi có 3 kí tự. Xác định xem 3 ký tự trên mỗi hàng có đúng thứ tự bảng chữ cái (ASCII) hay không, nếu đúng xuất ra "true", ngược lại xuất ra "false". Chương trình sẽ lặp cho đến khi 3 ký tự đọc vào là "***".

Đầu vào:
Biến fileName là tên file chứa dữ liệu cần đọc vào.

Đầu ra:
"true" hoặc "false", theo sau bởi dấu xuống dòng, trừ trường hợp đọc vào "***" thì kết thúc chương trình.

For example:

Test	Input	Result
1       123     true
        abc     true
        aab     true
        ***
*/

#include <iostream>
#include <fstream>

using namespace std;

void threeChars(string fileName)   {
    // TODO
    ifstream ifs(fileName);
    
    string str;
    
    ifs >> str;
    
    while(str != "***"){
        bool inOrder = true;
        for(int i = 0; i < 2; i++){
            if(str[i] > str[i+1]){
                inOrder = false;
                break;
            }
        }
        
        if(inOrder) cout << "true";
        else cout << "false";
        cout << endl;
        ifs >> str;
    } 
}

int main(){

    string fileName = "test";

    threeChars(fileName);

    return 0;
}