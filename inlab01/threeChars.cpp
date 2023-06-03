#include <iostream>
#include <fstream>

using namespace std;

void threeChars(string fileName)   {
    // TODO
    ifstream ifs(fileName);
    
    string str;
    
    ifs >> str;
    
    while(str != "***"){
        bool inOrder = true;
        for(int i = 0; i < 2; i++){
            if(str[i] > str[i+1]){
                inOrder = false;
                break;
            }
        }
        
        if(inOrder) cout << "true";
        else cout << "false";
        cout << endl;
        ifs >> str;
    } 
}

int main(){

    string fileName = "test";

    threeChars(fileName);

    return 0;
}