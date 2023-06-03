#include <iostream>

using namespace std;

int diagonalProduct(int arr[][1000], int row, int col) {
    int product = 1;
    
    for(int i = 0; i < row; i++){
        product *= arr[i][i];
    }
    
    return product;
}

int main(){
    
    int arr[][1000] = {{-45,18,-37},{-2,-31,24},{-48,-33,-48}};
    cout << diagonalProduct(arr,3,3);

    return 0;
}