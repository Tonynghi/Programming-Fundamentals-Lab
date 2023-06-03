#include <iostream>
#include <fstream>

using namespace std;

void calSum(string fileName){
    // TODO
    ifstream ifs(fileName);
    
    int sum = 0;
    
    int num;
    
    while(ifs >> num) sum+=num;
    
    cout << sum;
}

int main(){

    return 0;
}