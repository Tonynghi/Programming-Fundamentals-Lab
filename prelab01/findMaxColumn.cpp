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