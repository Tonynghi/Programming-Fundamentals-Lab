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