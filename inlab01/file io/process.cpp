/*
Viết hàm void process(string fileName) đọc một file đuôi txt, dòng đầu gồm 2 số N và M cách nhau bởi 1 khoảng trắng.

N dòng theo sau, mỗi dòng gồm M số thực cách nhau bởi 1 khoảng trắng.

Trả về giá trị lớn nhất của mỗi dòng và giá trị lớn nhất trong tất cả các số.
Các thư viện đã được include: iostream, fstream, string.

Đầu vào:
Biến "fileName" là tên file chứa dữ liệu đầu vào.

Đầu ra:
Giá trị lớn nhất của mỗi dòng và giá trị lớn nhất của tất cả các số, cách nhau bởi ký tự khoảng trắng.

For example:
Test	Input	            Result
1       3 4                 4 41.2 -1 41.2
        1 2 3 4
        4.3 41.2 -4.576 0
        -3 -2 -4 -1
*/

#include <iostream>
#include <fstream>

using namespace std;

void process(string fileName)   {
    // TODO
    int row, col;
    
    ifstream ifs(fileName);
    
    ifs >> row; ifs >> col;
    
    double maxAll;
    ifs >> maxAll;
    double maxRow1 = maxAll;
    double hold1;
    for(int j = 1; j < col; j++){
        ifs >> hold1;
        if(hold1 > maxRow1) maxRow1 = hold1;
    }
    cout << maxRow1 << " ";
    if(maxRow1 > maxAll) maxAll = maxRow1;
    
    for(int i = 1; i < row; i++){
        double maxRow;
        ifs >> maxRow;
        double hold;
        for(int j = 1; j < col; j++){
            ifs >> hold;
            if(hold > maxRow) maxRow = hold;
        }
        cout << maxRow << " ";
        if(maxRow > maxAll) maxAll = maxRow;
    }
    
    cout << maxAll;
}

int main(){

    return 0;
}