# include <iostream>
# include "functions.h"
using namespace std;
// Defining functions
bool is_valid_range(int a, int b){
		if(a <= 0){
			return(0);
		}
		else if ( a> b){
			return(0);
		}
		else if (b > 10000){
			return(0);
		}
		else{
			return(1);
		}
}
int count_digit_occurrences(int number, int digit){
	//int testDigit;
	int occurrences = 0;
	int repeat = 0;
		while (number > 0){
			if (digit == number%10){
				occurrences +=1;
			}
			number /= 10;
		}
			if (occurrences >= 2){
			repeat = 1;
			}
	return repeat;
}


bool has_repeated_digits(int number){
	int digit = 0;
	for(digit = 0; digit < 10; ++ digit){
		if(count_digit_occurrences(number,digit) > 0){
		return 1;
	}
	}
		return 0;
}

int count_valid_numbers(int a, int b){
	int numBetween = a;
	int amountBetween = b-a +1;
	if(!is_valid_range(a, b)){
		cout<<"Invalid input\n";
		int invalid = 1;
		exit (invalid);
	}
	while ( numBetween <= b+1){
			if (has_repeated_digits(numBetween)){
				amountBetween = amountBetween -1;

				
		}
		numBetween +=1;

	}
	if (amountBetween < 0){
		amountBetween = 0;
	}
	return amountBetween;
}	