/*
Viết hàm sum2 để tính tổng giá trị các phần tử trong mảng số nguyên.

Tham số:
int* array: mảng số nguyên
int size: số phần tử trong mảng
int& result: tham số để lưu kết quả cuối cùng sau khi tính toán

For example:
Test	Input	                                    Result
1       10
        -11 111 -1111 -112 -101 11 -19 1 145 12     -1074
*/

#include <iostream>

using namespace std;

void sum2(int * array, int numEls, int &result)
{
    // TODO
    for(int i = 0; i < numEls; i++){
        result += *array;
        array++;
    }
}

int main(){

    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr;

    int res = 0;

    sum2(ptr, 5, res);

    cout << res;

    return 0;
};