# include <iostream>
# include "functions.h"
using namespace std;

// Defining functions

int main()
{
	// Main code
	int a;
	int b;
	cout << "Enter numbers 0 < a <= b <= 10000: ";
	cin >> a;
	cin  >> b;
	int output = count_valid_numbers(a, b);
	cout << "There are " << output << " valid numbers between\n";
	cout << a << " and " << b;		
}