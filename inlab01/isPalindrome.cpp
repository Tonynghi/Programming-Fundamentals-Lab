#include <iostream>

using namespace std;

bool isPalindrome(const char* str) {
    // Write your code here
    int size = 0;
    string istr = "";
    string inv_str = ""; 
    
    while(*str != '\0'){
        size++;
        istr += *str;
        str++;
    }
    
    for(int i = size - 1; i > -1; i--){
        inv_str += istr[i];
    }
    
    if(inv_str == istr) return true;
    else return false;
}

int main(){

    const char* str = "abba";
    cout << isPalindrome(str);

    return 0;
}