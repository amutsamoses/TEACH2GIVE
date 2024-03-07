/**
*
* Question 3
*
* Write a program that takes an integer as input and returns true if the input is a power of two.
*
* Examples:
* 8=> returns true
* 6=> returns false
*
**/


#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    
    if (n <= 0) {
        return false;
    }
    // power of two if n & (n-1) is 0
    return (n & (n - 1)) == 0;
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (isPowerOfTwo(number)) {
        cout << "Returns true" << endl;
    } else {
        cout << "Returns false" << endl;
    }

    return 0;
}


