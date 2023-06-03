#include <iostream>

using namespace std;

void sum2(int * array, int numEls, int &result)
{
    // TODO
    for(int i = 0; i < numEls; i++){
        result += *array;
        array++;
    }
}

int main(){

    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr;

    int res = 0;

    sum2(ptr, 5, res);

    cout << res;

    return 0;
};