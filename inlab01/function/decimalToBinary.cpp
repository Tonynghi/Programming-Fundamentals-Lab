/*
Cho một số thập phân dương làm đầu vào, chúng ta cần triển khai hàm
long int decimalToBinary(int decimal_number){}

để chuyển đổi số thập phân dương đã cho thành số nhị phân tương đương.

Xin lưu ý rằng bạn không thể sử dụng từ khóa for, while, goto (ngay cả trong tên biến, comment).

Đối với bài tập này, chúng ta có #include <iostream> và sử dụng namespace std;

For example:
Test							Result
cout << decimalToBinary(20);	10100
*/

#include <iostream>

using namespace std;

long int decimalToBinary(int decimal_number)
{
	/*
	* STUDENT ANSWER
	*/
    if(decimal_number == 0) return 0;
    else {
	    int n = decimal_number % 2;
	    decimal_number /= 2;
	    return n + 10*decimalToBinary(decimal_number);
    }
}

int main(){

    return 0;
}