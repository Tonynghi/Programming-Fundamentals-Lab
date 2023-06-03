#include <iostream>

using namespace std;

void encrypt(char* text, int shift) {
    // Write your code 
    shift = shift % 26;
    
    while(*text != '\0'){
        if(*text > 64 && *text < 91){
            if(*text + shift > 90) *text = *text - 26 + shift;
            else if(*text + shift < 65) *text = *text + 26 + shift;
            else *text += shift;
        } else {
            if(*text + shift > 122) *text = *text - 26 + shift;
            else if(*text + shift < 97) *text = *text + 26 + shift;
            else *text += shift;
        }
        text++;
    }
}

void decrypt(char* text, int shift) {
    // Write your code
    shift = shift % 26;
    
    while(*text != '\0'){
        if(*text > 64 && *text < 91){
            if(*text - shift < 65) *text = *text + 26 - shift;
            else if(*text - shift > 90) *text = *text + 26 - shift;
            else *text -= shift;
        } else {
            if(*text - shift < 97) *text = *text + 26 - shift;
            else if(*text - shift > 122) *text = *text + 26 - shift;
            else *text -= shift;
        }
        text++;
    }
}

int main(){

    int n, shift; 
    cin >> n >> shift;
    char* text = new char[n+1];
    for(int i = 0; i < n; i++) cin >> text[i];
    text[n] = 0;

    encrypt(text, shift);
    cout << text << '\n';
    decrypt(text, shift);
    cout << text;

    delete[] text;

    return 0;
}