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