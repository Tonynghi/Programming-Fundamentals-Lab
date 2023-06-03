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