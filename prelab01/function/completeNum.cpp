/*
Viết hàm bool completeNum(int N) để kiểm tra xem số nguyên dương N có phải là một số hoàn thiện hay không. N là một số hoàn thiện nếu N bằng tổng tất cả ước số nguyên dương (không bao gồm chính nó) của nó.

Đầu vào: 
int N: số nguyên dương N cần kiểm tra

Đầu ra:
bool: trả về true nếu N là số hoàn thiện, ngược lại trả về false

For example:
Test	Input	Result
1       6       true
*/

#include <iostream>

using namespace std;

bool completeNum(int N)
{
    // TODO
    int result = 0;
    
    for(int i = 1; i < N; i++){
        if(N % i == 0) result += i;
    }
    
    if(result == N) return true;
    else return false;
}

int main(){

    int test = 6;
    cout << completeNum(test);

    return 0;
};