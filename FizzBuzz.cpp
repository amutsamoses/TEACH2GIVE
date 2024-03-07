/**
*
* Question 1.
*
* Write a program that prints the numbers from 1 to 100. For multiples of 3, print "Fizz"; for
* multiples of 5, print "Buzz"; and for numbers that are multiples of both 3 and 5, print
* "FizzBuzz".
*
**/

#include <bits/stdc++.h> 
using namespace std; 

vector<string> fizzBuzz(int n) 
{ 
	// Declare a vector of strings to store the results 
	vector<string> result; 

	// Loop from 1 to n
	for (int i = 1; i <= n; ++i) { 

		// Check if i is divisible by both 3 and 5 
		if (i % 3 == 0 && i % 5 == 0) { 

			// Add "FizzBuzz" to the result vector 
			result.push_back("FizzBuzz"); 
		} 

		// Check if i is divisible by 3 
		else if (i % 3 == 0) { 

			// Add "Fizz" to the result vector 
			result.push_back("Fizz"); 
		} 

		// Check if i is divisible by 5 
		else if (i % 5 == 0) { 

			// Add "Buzz" to the result vector 
			result.push_back("Buzz"); 
		} 
		else { 

			// Add the current number as a string to the 
			// result vector 
			result.push_back(to_string(i)); 
		} 
	} 


	return result; 
} 


int main() 
{ 
	int n = 100; 

	// Call the fizzBuzz function to get the result 
	vector<string> result = fizzBuzz(n); 


	for (const string& s : result) { 
		cout << s << " "; 
	} 

	return 0; 
}

