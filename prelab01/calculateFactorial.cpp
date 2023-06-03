#include <iostream>

using namespace std;
// implement calculate factorial function in here
int calculateFactorial(int n){
    int result = 1;
    for(int i = 1; i <= n; i++){
        result *= i;
    }
    
    return result;
}


int main(int narg, char** argv)
{
    int N;
    cin >> N;
    long result;
    // call function calculateFactorial in here and assign value to the variable result
    result = calculateFactorial(N);
    
    cout << result << endl;
    return 0;
}