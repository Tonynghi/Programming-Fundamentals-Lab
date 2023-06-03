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