// This program demonstrates the IntStack class.
#include <iostream>
#include <string>
#include "Data.h"
using namespace std;

int main()
{
	cout << " ====================================\n";
	cout << " |            INT  STACK            |\n";
	cout << " ====================================\n";
	cout << "\n";

	GenericStack<int> intStack(2);
	int intCatchVar;
	
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
	cout << " |            DOUBLE  STACK          |\n";
	cout << " =====================================\n";
	cout << "\n";

	GenericStack<double> doubleStack(5);
	double doubleCatchVar;
	
	//OUTPUT DOUBLE STACK
	doubleStack.push(5.5);
	cout << "PUSHING 5.5 \n";
	doubleStack.push(10.5);
	cout << "PUSHING 10.5 \n ";
	
	cout << "\n";
	doubleStack.pop(doubleCatchVar);
	cout << "POPPING " <<  doubleCatchVar << "\n";
	doubleStack.pop(doubleCatchVar);
	cout << "POPPING " << doubleCatchVar << "\n";

	
	cout << " ====================================\n";
	cout << " |            CHAR  STACK           |\n";
	cout << " ====================================\n";
	cout << "\n";

	GenericStack<char> charStack(5);
	char charCatchVar;
	
	//OUTPUT CHAR STACK
	charStack.push('A');
	cout << "PUSHING A \n";
	charStack.push('B');
	cout << "PUSHING B \n ";

	cout << "\n";
	charStack.pop(charCatchVar);
	cout << "POPPING " << charCatchVar << "\n";
	charStack.pop(charCatchVar);
	cout << "POPPING " << charCatchVar << "\n";
	

	cout << " =====================================\n";
	cout << " |          STRING  STACK            |\n";
	cout << " =====================================\n";
	cout << "\n";

	GenericStack<string> stringStack(5);
	string stringCatchVar;
	
	//OUTPUT STRING STACK
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
