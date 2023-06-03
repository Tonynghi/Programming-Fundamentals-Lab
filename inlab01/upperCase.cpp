#include <iostream>
#include <fstream>

using namespace std;

void uppercase(string output)   {
    // TODO
    string str;
    cin >> str;
    
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] >= 97 && str[i] <= 122){
            str[i] -= 32;
        }
        i++;
    }
    
    ofstream ofs(output);
    
    ofs << str;
}

int main(){

    string output = "test";

    uppercase(output);

    return 0;
}