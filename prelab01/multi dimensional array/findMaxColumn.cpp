/*
Cho mảng 2 chiều chứa các số nguyên, kích thước M x N.

Hiện thực hàm:
int findMaxColumn(int arr[][1000], int row, int col);

Trong đó; arr, row và col lần lượt là mảng 2 chiều, số hàng và số cột của mảng. Tìm chỉ số của cột có tổng tất cả các phần tử lớn nhất.

Lưu ý: Cột đầu tiên được đánh chỉ số 0. Nếu có nhiều hơn một cột có tổng lớn nhất, ta chọn cột có chỉ số lớn nhất.

Ghi chú: (Các) thư viện iostream và climits đã được khai báo, và namespace std đã được sử dụng.

For example:
Test	                                                                    Result
int arr[][1000] = {{-44,64,-6},{87,92,-19},{-92,53,-38},{-39,-92,21}};      1
cout << findMaxColumn(arr, 4, 3);

int arr[][1000] = {{-92,78,-2,-58,-37},{44,-4,30,-69,22}};                  1
cout << findMaxColumn(arr, 2,5);
*/

#include <iostream>

using namespace std;

int findMaxColumn(int arr[][1000], int row, int col) {
    int largestSum = 0;
    int maxColumn = 0;
    
    for(int i = 0; i < row; i++){
        largestSum += arr[i][0];
    }
    
    for(int i = 1; i < col; i++){
        int sum = 0;
        for(int j = 0; j < row; j++){
            sum += arr[j][i];
        }
        if(sum >= largestSum){
            largestSum = sum;
            maxColumn = i;
        }
    }
    
    return maxColumn;
}

int main(){
    int arr[][1000] = {{-44,64,-6},{87,92,-19},{-92,53,-38},{-39,-92,21}};
    cout << findMaxColumn(arr, 4, 3);

    return 0;
}