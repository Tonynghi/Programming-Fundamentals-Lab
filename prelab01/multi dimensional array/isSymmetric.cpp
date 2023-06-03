/*
Cho mảng 2 chiều chứa các số nguyên, kích thước N x N.

Hiện thực hàm:
bool isSymmetric(int arr[][1000], int row, int col);

Trong đó; arr, row và col lần lượt là mảng 2 chiều, số hàng và số cột của mảng. Một ma trận được gọi là đối xứng nếu với mọi i, j; giá trị của phần tử ở hàng i, cột j luôn bằng giá trị của phần tử ở hàng j, cột i. Kiểm tra xem mảng này có phải là một ma trận đối xứng hay không; trả về true nếu mảng này là ma trận đối xứng; ngược lại, trả về false.

Ghi chú: (Các) thư viện iostream và string đã được khai báo, và namespace std đã được sử dụng.

For example:
Test	                                            Result
int arr[][1000] = {{1,4,6}, {4,5,3}, {6,3,9}};      1
cout << isSymmetric(arr,3,3);

int arr[][1000] = {{1,9,6}, {4,5,3}, {6,3,9}};      0
cout << isSymmetric(arr,3,3);
*/

#include <iostream>

using namespace std;

bool isSymmetric(int arr[][1000], int row, int col) {
    bool isSym = true;
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < i; j++){
            if(arr[i][j] != arr[j][i]){
                isSym = false;
                break;
            }
        }
        if(!isSym) break;
    }
    
    return isSym;
}

int main(){
    
    int arr[][1000] = {{1,4,6}, {4,5,3}, {6,3,9}};
    cout << isSymmetric(arr,3,3);

    return 0;
}