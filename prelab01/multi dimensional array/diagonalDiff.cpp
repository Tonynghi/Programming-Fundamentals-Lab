/*
Cho mảng 2 chiều chứa các số nguyên, kích thước M x N.

Hiện thực hàm:
int diagonalDiff(int arr[][1000], int row, int col, int x, int y);

Trong đó; arr, row và col lần lượt là mảng 2 chiều, số hàng, số cột của mảng; x và y biểu thị ô có số hàng là x và số cột là y trong mảng đã cho (0≤x<row và 0≤y<col). Tổng của một đường chéo là tổng tất cả các phần tử nằm trên đường chéo đó. Tìm giá trị tuyệt đối của hiệu giữa hai đường chéo đi qua ô có số hàng x và số cột y.

Ghi chú: (Các) thư viện iostream, vector và string đã được khai báo, và namespace std đã được sử dụng.

For example:
Test	                                                                        Result
int arr[][1000] = {{55,85,47,58},{31,4,60,67},{94,69,71,73},{51,62,64,90}};     20
cout << diagonalDiff(arr,4,4,1,2);

int arr[][1000] = {{88,72,65,37},{82,84,34,12},{74,46,88,44}};                  26
cout << diagonalDiff(arr,3,4,1,0);
*/

#include <iostream>

using namespace std;

int diagonalDiff(int arr[][1000], int row, int col, int x, int y) {
    int rSum = 0;
    int lSum = 0;
    
    int i = x;
    int j = y;
    while(i >= 0 && j >= 0){
        rSum += arr[i][j];
        i--;
        j--;
    }
    
    i = x+1;
    j = y+1;
    while(i < row && j < col){
        rSum += arr[i][j];
        i++;
        j++;
    }
    
    i = x;
    j = y;
    while(i < row && j >= 0){
        lSum += arr[i][j];
        i++;
        j--;
    }
    
    i = x - 1;
    j = y + 1;
    while(i >= 0 && j < col){
        lSum += arr[i][j];
        i--;
        j++;
    }
    
    int diff = rSum - lSum;
    
    if(diff >= 0) return diff;
    else return 0 - diff;
}

int main(){
    
    int arr[][1000] = {{55,85,47,58},{31,4,60,67},{94,69,71,73},{51,62,64,90}};
    cout << diagonalDiff(arr,4,4,1,2);

    return 0;
}