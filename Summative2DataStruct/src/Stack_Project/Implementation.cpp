#include <iostream>
#include "Data.h"
#include <string.h>
using namespace std;

//*******************
// Constructor      *
//*******************

IntStack::IntStack(int size)
{
	stringArray[10] = new char[size]; // FOR STRING 
	IntegerArray = new int[size]; // FOR INTEGER 
	FloatArray = new float[size];  // FOR DOUBLE AND FLOAT
	CharacterArray = new char[size]; // FOR CHAR
	stackSize = size;
	top = -1;
}




//*************************************************
// Member function push pushes the argument onto  *
// the stack.                                     *
//*************************************************

void IntStack::pushString(char x[100])
{
	if (isFull())
	{
		cout << "The stack is full.\n";
	}
	else
	{
		top++;
		stringArray[100][top] = x[100];

	}
}

void IntStack::pushInteger(int Integernum)
{
	if (isFull())
	{
		cout << "The stack is full.\n";
	}
	else
	{
		top++;
		IntegerArray[top] = Integernum;

	}
}

void IntStack::pushFloat(float Floatnum)
{
	if (isFull())
	{
		cout << "The stack is full.\n";
	}
	else
	{
		top++;
		FloatArray[top] = Floatnum;

	}
}

void IntStack::pushCharacter(char charArr)
{
	if (isFull())
	{
		cout << "The stack is full.\n";
	}
	else
	{
		top++;
		CharacterArray[top] = charArr;

	}
}



//****************************************************
// Member function pop pops the value at the top     *
// of the stack off, and copies it into the variable *
// passed as an argument.                            *
//****************************************************

void IntStack::popInteger(int& Integernum)
{
	if (isEmpty())
	{
		cout << "The stack is empty.\n";
	}
	else
	{
		Integernum = IntegerArray[top];
		top--;
	}
}

void IntStack::popFloat(float& Floatnum)
{
	if (isEmpty())
	{
		cout << "The stack is empty.\n";
	}
	else
	{
		Floatnum = FloatArray[top];
		top--;
	}
}

void IntStack::popCharacter(char& charArr)
{
	if (isEmpty())
	{
		cout << "The stack is empty.\n";
	}
	else
	{
		charArr = CharacterArray[top];
		top--;
	}
}

void IntStack::popString(char& x)
{
	if (isEmpty())
	{
		cout << "The stack is empty.\n";
	}
	else
	{
		x = stringArray[100][top];
		top--;
	}
}

//***************************************************
// Member function isFull returns true if the stack *
// is full, or false otherwise.                     *
//***************************************************

bool IntStack::isFull()
{
	bool status;

	if (top == stackSize - 1)
		status = true;
	else
		status = false;
	return status;
}



//****************************************************
// Member function isEmpty returns true if the stack *
// is empty, or false otherwise.                     *
//****************************************************
bool IntStack::isEmpty()
{
	bool status;

	if (top == -1)
		status = true;
	else
		status = false;

	return status;
}

