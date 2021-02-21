#include <iostream>
#include <limits>

using namespace std;

/*
	Recursive Member Test: Write a recursive boolean function named isMember. 
	The function should accept three parameters: an array of integers, an 
	integer indicating the number of elements in the array, and an integer 
	value to be searched for. The function should return true if the value 
	is found in the array, or false if the value is not found. Demonstrate 
	the use of the function in a program that asks the user to enter an 
	array of numbers and a value to be searched for.
*/

int getArraySize ();
void getArrayValues (int *givenArray, int arraySize);
int getSearchNumber ();
bool isMember (int *givenArray, int arraySize, int searchNumber);

int main() {
	//Initialize variables
	int *arrayA = nullptr;
	int arraySize = 0;
	int searchNumber = 0;

	arraySize = getArraySize ();
	arrayA = new int[arraySize];
	getArrayValues (arrayA, arraySize);
	searchNumber = getSearchNumber();

	//Search for the number
	if (isMember (arrayA, arraySize, searchNumber))
		cout << "The value " << searchNumber << " is found in the array." << '\n';
	else
		cout << "The value " << searchNumber << " is not found in the array." << '\n';
}


//Precondition: ArraySize is a positive integer
//Postcondition: Value of arraySize has been returned
int getArraySize () {
	int arraySize;

	//Get array size
	while (true) {
		cout << "Enter the size of the array: ";
		cin >> arraySize;

		//Checks if input is correct 
		if (arraySize <= 0 || cin.fail()) {
			//Clear the stream and ignore infinite newlines
			cin.clear ();
			cin.ignore (numeric_limits<streamsize>::max (), '\n');

			//Error message and skip the loop
			cout << "Number must be a positive integer" << '\n';
			continue;
		}

		break;
	}
	return arraySize;
}

//Precondition: Array values must be integer
//Postcondition: Array must fill up the with values equal to the arraysize
void getArrayValues (int *givenArray, int arraySize) {
	int arrayCounter = 0;

	//Get array values
	while (arrayCounter != arraySize) {
		cout << "Enter the values for the array[" << arrayCounter << "]: ";
		cin >> givenArray [arrayCounter];

		//Checks if input is correct 
		if (cin.fail ()) {
			//Clear the stream and ignore infinite newlines
			cin.clear ();
			cin.ignore (numeric_limits<streamsize>::max (), '\n');

			//Error message and skip the loop
			cout << "Number must be an integer" << '\n';
			continue;
		}

		++arrayCounter;
	}
}

//Precondition: SearchNumber is an integer
//Postcondition: Must return the value of the search number
int getSearchNumber () {
	int searchNumber;

	//Get the number to find
	while (true) {
		cout << "Enter the number to be searched in the array: ";
		cin >> searchNumber;

		if (cin.fail ()) {
			//Clear the stream and ignore infinite newlines
			cin.clear ();
			cin.ignore (numeric_limits<streamsize>::max (), '\n');

			//Error message and skip the loop
			cout << "Number must be an integer" << '\n';
			continue;
		}

		break;
	}

	return searchNumber;
}

//Precondition: ArraySize is nonnegative and givenArray must already have values
//Postcondition: Must return true if the value  is found and false if not
bool isMember (int *givenArray, int arraySize, int searchNumber) {
	if (givenArray [arraySize] == searchNumber)
		return true;

	if (arraySize == 0) 
		return false;

	return isMember (givenArray, arraySize - 1, searchNumber);
}

