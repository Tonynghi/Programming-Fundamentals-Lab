/*
Viết hàm void calSum(string fileName) để tính tổng của các số nguyên không âm được đọc vào từ một file đuôi txt (các số nằm trên 1 hàng phân cách với nhau bằng một khoảng trắng).

Đầu vào:
Biến "fileName" là tên file dữ liệu chứa các số nguyên không âm (các số nằm trên 1 hàng phân cách với nhau bằng một khoảng trắng).

Đầu ra:
Một số nguyên là tổng của các số nguyên đầu vào.

For example:
Test	Input	    Result
1       0 2 3 5     10
*/

#include <iostream>
#include <fstream>

using namespace std;

void calSum(string fileName){
    // TODO
    ifstream ifs(fileName);
    
    int sum = 0;
    
    int num;
    
    while(ifs >> num) sum+=num;
    
    cout << sum;
}

int main(){

    return 0;
}