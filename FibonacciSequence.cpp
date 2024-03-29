/**
*
* Question 2
*
* Write a program to generate the Fibonacci sequence up to 100
*
**/

#include <iostream>
using namespace std;

int fibonacci_numbers(int n)
{
	if(n == 0){
		return 0;
	}
	else if(n == 1){
		return 1;
	}
	else{
		return fibonacci_numbers(n-2) + fibonacci_numbers(n-1);
	}
}

int main() {
	int n = 100;
	for(int i = 0; i < n; i++)
	{
		cout << fibonacci_numbers(i) << " ";
	}
	return 0;
}

