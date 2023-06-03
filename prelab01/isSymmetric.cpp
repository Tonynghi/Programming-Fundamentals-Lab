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