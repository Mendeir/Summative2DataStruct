// This program demonstrates the IntStack class.
#include <iostream>
#include <string>
#include "Data.h"
using namespace std;

int main()
{
	
	GenericStack<int> intStack(2);
	int intCatchVar;
	
	
	cout << " ===================================\n";
	cout << " |            INT  STACK             |\n";
	cout << " ====================================\n";
	cout << "\n";

	
	// OUTPUT INT STACK
	intStack.push(5);
	cout << "PUSHING 5 \n";
	intStack.push(10);
	cout << "PUSHING 10 \n" ;
	
	cout << "\n";
	intStack.pop(intCatchVar);
	cout << "POPPING " <<intCatchVar << "\n";
	intStack.pop(intCatchVar);
	cout << "POPPING " << intCatchVar << "\n";


	cout << " =====================================\n";
	cout << " |          DOUBLE  STACK             |\n";
	cout << " =====================================\n";
	cout << "\n";

	//OUTPUT DOUBLE STACK
	GenericStack<double> doubleStack(5);
	double doubleCatchVar;

	doubleStack.push(5.5);
	cout << "PUSHING 5.5 \n";
	doubleStack.push(10.5);
	cout << "PUSHING 10.5 \n ";
	


	cout << "\n";
	doubleStack.pop(doubleCatchVar);
	cout << "POPPING " <<  doubleCatchVar << "\n";
	doubleStack.pop(doubleCatchVar);
	cout << "POPPING " << doubleCatchVar << "\n";



	cout << " =====================================\n";
	cout << " |          CHAR  STACK               |\n";
	cout << " =====================================\n";
	cout << "\n";

	//OUTPUT CHAR STACK
	GenericStack<char> charStack(5);
	char charCatchVar;

	charStack.push('A');
	cout << "PUSHING A \n";
	charStack.push('B');
	cout << "PUSHING B \n ";



	cout << "\n";
	charStack.pop(charCatchVar);
	cout << "POPPING " << charCatchVar << "\n";
	charStack.pop(charCatchVar);
	cout << "POPPING " << charCatchVar << "\n";


	//OUTPUT STRING STACK
	GenericStack<string> stringStack(5);
	string stringCatchVar;

	cout << " =====================================\n";
	cout << " |          STRING  STACK             |\n";
	cout << " =====================================\n";
	cout << "\n";


	stringStack.push("HELLO WORLD");
	cout << "PUSHING HELLO WORLD \n";
	stringStack.push("WELCOME BACK");
	cout << "PUSHING WELCOME BACK \n ";


	cout << "\n";
	stringStack.pop(stringCatchVar);
	cout << "POPPING " << stringCatchVar << "\n";
	stringStack.pop(stringCatchVar);
	cout << "POPPING " << stringCatchVar << "\n";


	



	
	return 0;

}
