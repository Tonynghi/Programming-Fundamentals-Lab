#include <iostream>

using namespace std;

bool checkElementsUniqueness(int* arr, int n) {
    // Write your code 
    int uesize = 0; //ue stands for unique element
    int uearr[n] = {};
    bool unique = true;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < uesize; j++){
            if(uearr[j] == *arr){
                unique = false;
                break;
            }
        }
        if(unique){
            uearr[uesize] = *arr;
            uesize++;
            arr++;
        } else break;
    }
    
    return unique;
}

int main(){

    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << checkElementsUniqueness(arr, n);
    delete[] arr;

    return 0;
}