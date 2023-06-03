/*
Cho mảng 2 chiều chứa các số nguyên, kích thước M x N.

Hiện thực hàm:
int ascendingRows(int arr[][1000], int row, int col);

Trong đó; arr, row và col lần lượt là mảng 2 chiều, số hàng và số cột của mảng. Một hàng trong mảng được gọi là HN1 nếu trong hàng đó, mỗi phần tử đều có giá trị không lớn hơn các phần tử đứng sau nó. Tìm số hàng HN1 có trong mảng.

Ghi chú: (Các) thư viện iostream, và string đã được khai báo, và namespace std đã được sử dụng.

For example:
Test	                                                                Result
int arr[][1000] = {{32,4,9},{-80,37,71},{-91,-79,-55}};                 2
cout << ascendingRows(arr,3, 3);

int arr[][1000] = {{-28,-8,-60,18},{-100,44,-1,24},{-94,92,-70,75}};    0
cout << ascendingRows(arr,3,4);
*/

#include <iostream>

using namespace std;

int ascendingRows(int arr[][1000], int row, int col) {
    int HN1num = 0;
    
    for(int i = 0; i < row; i++){
        bool isHN1 = true;
        for(int j = 0; j < col - 1; j++){
            if(arr[i][j] > arr[i][j+1]){
                isHN1 = false;
                break;
            }
        }
        if(isHN1) HN1num++;
    }
    
    return HN1num;
}

int main(){

    int arr[][1000] = {{32,4,9},{-80,37,71},{-91,-79,-55}};
    cout << ascendingRows(arr,3, 3);

    return 0;
}