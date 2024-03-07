/**
*
* Question 6
*
* Write a program that counts the number of vowels in a sentence.
*
*
* eg " Hello World " => returns 2
*
*
**/

#include <iostream>
#include <string>
using namespace std;

int countVowels(const string& sentence) {
    int vowelsCount = 0;
    // List of vowels in both uppercase and lowercase
    string vowels = "aeiou AEIOU";
    
    // Iterate over each character in the sentence
    for (char c : sentence) {
        // Check if the character is a vowel
        if (vowels.find(c) != string::npos) {
            ++vowelsCount; // Increment the count if it is a vowel
        }
    }
    
    return vowelsCount;
}

int main() {
    string sentence;
    cout << "Write a sentence: ";
    getline(cin, sentence); // Use getline to read the whole line including spaces

    int vowels = countVowels(sentence);
    cout << "Number of vowels: " << vowels << endl;

    return 0;
}

