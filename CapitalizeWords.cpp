/**
*
* Question 4;
*
* Write a program that accepts a string as input, capitalizes the first letter of each word in the
* string, and then returns the result string.
*
* Examples:
* "hi"=> returns "Hi"
* "i love programming"=> returns "I Love Programming"
*
*
**/

#include <iostream>
#include <string>
#include <cctype> // Character classification for toupper() and isalpha()

using namespace std;

string capitalizeFirstLetter(string input) {
    bool UPPERCASE = true; 
    
    
    for (char &c : input) {
        if (UPPERCASE && isalpha(c)) {
            
            c = isupper(c);
            UPPERCASE = false; 
        } else if (!isalpha(c)) {
            
            UPPERCASE = true;
        }
    }

    return input;
}

int main() {
    string input;
    cout << "\nEnter either a word or sentence i lowercase: \n\n\t";
    getline(cin, input); 

    string result = capitalizeFirstLetter(input);
    cout << "Result: " << result << endl;

    return 0;
}

