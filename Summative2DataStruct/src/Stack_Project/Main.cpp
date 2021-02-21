// This program demonstrates the IntStack  class.
#include <iostream>
#include "Data.h"
#include <string.h>

using namespace std;

int main()
{
	IntStack stack(5); // for ALL DATA TYPES

	char catchStringVar[100];
	int catchIntegerVar;
	float catchFloatVar;
	char catchCharacterVar;

	cout << "===================================" << endl;
	cout << "|             STACKS              |" << endl;
	cout << "===================================" << endl;


	cout << "ooooo PUSHING TIME ooooo" << endl;

	cout << "Pushing 100\n";  // FOR PUSHING A INTEGER DATA TYPE
	stack.pushInteger(100);

	cout << "Pushing 5.14\n"; // FOR PUSHING A FLOAT& DOUBLE DATA TYPE
	stack.pushFloat(5.14);

	cout << "Pushing A\n";
	stack.pushCharacter('A'); // FOR PUSHING A CHARACTER DATA TYPE


	cout << "Pushing HELLOWORLD\n"; // FOR PUSHING A STRING DATA TYPE 
	stack.pushString('h');

	cout << "Pushing 1.1\n";
	stack.pushFloat(1.1);


	cout << endl;
	cout << "ooooo POPPING TIME ooooo" << endl;




	stack.popFloat(catchFloatVar);
	cout << catchFloatVar << endl;

	stack.popString(catchStringVar[100]);
	cout << catchStringVar[100] << endl;

	stack.popCharacter(catchCharacterVar);  // FOR POPPING CHARACTER
	cout << catchCharacterVar << endl;

	stack.popFloat(catchFloatVar);   // FOR POPPING FLOAT & DOUBLE
	cout << catchFloatVar << endl;

	stack.popInteger(catchIntegerVar);  // FOR POPPING INTEGER
	cout << catchIntegerVar << endl;


}
