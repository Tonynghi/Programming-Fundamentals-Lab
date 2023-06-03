/*
Cho mảng 2 chiều chứa các số nguyên, kích thước M x N.

Hiện thực hàm:
int primeColumns(int arr[][1000], int row, int col);

Trong đó; arr, row và col lần lượt là mảng 2 chiều, số hàng và số cột của mảng. Một cột của mảng được gọi là HN2 nếu tổng tất cả các phần tử trong cột đó là số nguyên tố. Tìm số cột HN2 có trong mảng.

Ghi chú: (Các) thư viện iostream, vector và string đã được khai báo, và namespace std đã được sử dụng.

For example:
Test	                                                                                    Result
int arr[][1000] = {{-64,-28,-3,64},{-56,90,57,-31}};                                        0
cout << primeColumns(arr,2,4);

int arr[][1000] = {{34,-15,11,-70,-23,24},{-39,-90,63,-45,-52,48},{-42,92,55,92,82,81}};    1
cout << primeColumns(arr,3,6);
*/

#include <iostream>

using namespace std;

bool isPrime(int n){
    if(n < 2) return false;
    
    for(int i = 2; i < n; i++){
        if(n % i == 0) return false;
    }
    
    return true;
}

int primeColumns(int arr[][1000], int row, int col) {
    int HN2num = 0;
    
    for(int i = 0; i < col; i++){
        int sum = 0;
        for(int j = 0; j < row; j++){
            sum += arr[j][i];
        }
        if(isPrime(sum)) HN2num ++;
    }
    
    return HN2num;
}

int main(){

    int arr[][1000] = {{-64,-28,-3,64},{-56,90,57,-31}};
    cout << primeColumns(arr,2,4);

    return 0;
}