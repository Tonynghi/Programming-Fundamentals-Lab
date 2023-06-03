#include <iostream>

using namespace std;

long int decimalToBinary(int decimal_number)
{
	/*
	* STUDENT ANSWER
	*/
    if(decimal_number == 0) return 0;
    else {
	    int n = decimal_number % 2;
	    decimal_number /= 2;
	    return n + 10*decimalToBinary(decimal_number);
    }
}

int main(){

    return 0;
}