/*
Sinh viên hiện thực hàm int numberOfDiffCharac(string str)  để trả về số kí tự phân biệt trong chuỗi str.

Lưu ý: Chuỗi str chỉ bao gồm các kí tự từ a đến z (các chữ cái lower case trong bảng chữ cái tiếng anh)

For example:
Test	                                    Result
char str[] ="aa";                           1
printf("%d", numberOfDiffCharac(str));

char str[] ="ababbba";                      2
printf("%d", numberOfDiffCharac(str));
*/

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