#include <iostream>

using namespace std;

int numberOfDiffCharac(string str){
    int ucsize = 0;
    char ucarr[26] = {};
    bool unique;
    
    int i = 0;
    while(str[i] != '\0'){
        unique = true;
        for(int j = 0; j < ucsize; j++){
            if(ucarr[j] == str[i]){
                unique = false;
                break;
            }
        }
        if(unique){
            ucarr[ucsize] = str[i];
            ucsize++;
        }
        i++;
    }
    
    return ucsize;
}

int main(){

    char str[] ="aa";
    printf("%d", numberOfDiffCharac(str));

    return 0;
}