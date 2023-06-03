/*
Viết hàm kiểm tra các phần tử trong mảng có duy nhất hay không

Đầu vào:
int* arr: mảng số tự nhiên
int n: số lượng phần tử trong mảng

Đầu ra:
bool: trả về true nếu các phần tử trong mảng là duy nhất, ngược lại trả về false

Chú ý: arr[i] nằm trong khoảng từ [0, 1000]

For example:
Test	                                    Input	        Result
int n;                                      5               0
cin >> n;                                   2 5 13 5 2
int* arr = new int[n];
for(int i = 0; i < n; i++) {
    cin >> arr[i];
}
cout << checkElementsUniqueness(arr, n);
delete[] arr;
****

int n;                                      3               1
cin >> n;                                   17 10 25
int* arr = new int[n];
for(int i = 0; i < n; i++) {
    cin >> arr[i];
}
cout << checkElementsUniqueness(arr, n);
delete[] arr;
*/

#include <iostream>

using namespace std;

bool checkElementsUniqueness(int* arr, int n) {
    // Write your code 
    int uesize = 0; //ue stands for unique element
    int uearr[n] = {};
    bool unique = true;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < uesize; j++){
            if(uearr[j] == *arr){
                unique = false;
                break;
            }
        }
        if(unique){
            uearr[uesize] = *arr;
            uesize++;
            arr++;
        } else break;
    }
    
    return unique;
}

int main(){

    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << checkElementsUniqueness(arr, n);
    delete[] arr;

    return 0;
}