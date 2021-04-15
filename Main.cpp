/*
Prompt user for binary number
Convert binary to decimal
Output decimal number to user
*/

#include <iostream>
using std::cout;						
using std::cin;

int main() {

	std::string binaryString;				// Variable for User Input
	 
	cout << "Enter a binary number: ";			// Prompt for user input
	cin >> binaryString;					// Store user input

	int baseVal = 2;					// Base value power of 2
	int expVal = 0;						// Variable for exponent value
	int powerTwo;						// Variable for power of base and exp
	int decimalNumber = 0;					// Variable for storing decimal number
	int i = (binaryString.size() - 1);			// Variable for indexing string array

	while (i >= 0) {					// Increments through array looking for '1'
	    if (binaryString[i] == '1') {			// If '1' is found
		powerTwo = 1;					// Reset variable to 1

		for (int j = 0; j < expVal; j++) {  		// For loop expands exponent function
		     powerTwo *= baseVal;			// 2^3 = 2 * 2 * 2
		}
		decimalNumber += powerTwo;			// Add powerTwo to running total
	    }
	    i--;						// Decrement array index
	    expVal++;						// Increment exponent value
	}
								// Output result to user
	cout << "Decimal Number is: " << decimalNumber << std::endl;

	return 0;
}
