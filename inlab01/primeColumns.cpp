#include <iostream>

using namespace std;

bool isPrime(int n){
    if(n < 2) return false;
    
    for(int i = 2; i < n; i++){
        if(n % i == 0) return false;
    }
    
    return true;
}

int primeColumns(int arr[][1000], int row, int col) {
    int HN2num = 0;
    
    for(int i = 0; i < col; i++){
        int sum = 0;
        for(int j = 0; j < row; j++){
            sum += arr[j][i];
        }
        if(isPrime(sum)) HN2num ++;
    }
    
    return HN2num;
}

int main(){

    int arr[][1000] = {{-64,-28,-3,64},{-56,90,57,-31}};
    cout << primeColumns(arr,2,4);

    return 0;
}