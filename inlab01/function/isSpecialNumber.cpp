/*
Một số tự nhiên n được gọi là đặc biệt khi và chỉ khi n là số nguyên tố và tổng các chữ số của n cũng là số nguyên tố. Viết hàm kiểm tra một số tự nhiên có đặc biệt hay không.

Đầu vào:
int n: số tự nhiên cần kiểm tra có phải số đặc biệt không

Đầu ra:
bool: trả về true nếu n là số đặc biệt, ngược lại trả về false

For example:
Test	                        Input	Result
int n;                          23      1
cin >> n;
cout << isSpecialNumber(n);

int n;                          7       1
cin >> n;
cout << isSpecialNumber(n);
*/

#include <iostream>

using namespace std;

bool isPrime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0) return false;
    }
    
    return true;
}

bool isSpecialNumber(int n) {
    // Write your code
    if(isPrime(n)){
        int sumn = 0;
        
        while(n > 0){
            sumn += n%10;
            n /= 10;
        }
        
        if(isPrime(sumn)) return true;
        else return false;
    } else return false;
}

int main(){

    int n;
    cin >> n;
    cout << isSpecialNumber(n);
    
    return 0;
}