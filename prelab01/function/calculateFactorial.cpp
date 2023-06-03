/*
Hiện thực hàm tính giai thừa của số N, sau đó gọi hàm vừa hiện thực trong hàm main để gán kết quả tính được vào biến result.

Đầu vào: 

int N: số tự nhiên N

Template:

#include <iostream>

using namespace std;
// implement calculate factorial function in here
# TODO

int main(int narg, char** argv)
{
    int N;
    cin >> N;
    long result;
    // call function calculate factorial in here and assign value to the variable result
    # TODO


    cout << result << endl;
    return 0;
}


For example:
Test	Input	Result
1       5       120

*/

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