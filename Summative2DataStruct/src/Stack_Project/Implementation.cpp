#include <iostream>
#include <string>
#include "Data.h"
using namespace std;

//*******************
// Constructor      *
//*******************


template <typename givenDataType>
GenericStack<givenDataType>::GenericStack(int size)
{
	stackArray = new givenDataType[size]; 
	stackSize = size; 
	top = -1;
}
//*************************************************
// Member function push pushes the argument onto  *
// the stack.                                     *
//*************************************************
template <typename givenDataType>
void GenericStack<givenDataType>::push(givenDataType num)
{
	if (isFull())
	{
		cout << "The stack is full.\n";
	}
	else
	{
		top++;
		stackArray[top] = num;
	}
}
//****************************************************
// Member function pop pops the value at the top     *
// of the stack off, and copies it into the variable *
// passed as an argument.                            *
//****************************************************
template <typename givenDataType>
void GenericStack<givenDataType>::pop(givenDataType &num)
{
	if (isEmpty())
	{
		cout << "The stack is empty.\n";
	}
	else
	{
		num = stackArray[top];
		top--;
	}
}
//***************************************************
// Member function isFull returns true if the stack *
// is full, or false otherwise.                     *
//***************************************************
template <typename givenDataType>

bool GenericStack<givenDataType>::isFull()
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
template <typename givenDataType>
bool GenericStack<givenDataType>::isEmpty()
{
	bool status;

	if (top == -1)
		status = true;
	else 
		status = false;

	return status;
}


//Explicit Instantiation
//Constructor
template GenericStack<int>::GenericStack(int size);
template GenericStack<double>::GenericStack(int size);
template GenericStack<float>::GenericStack(int size);
template GenericStack<char>::GenericStack(int size);
template GenericStack<string>::GenericStack(int size);

// PUSH
template void GenericStack<int>::push(int num);
template void GenericStack<double>::push(double num);
template void GenericStack<float>::push(float num);
template void GenericStack<char>::push(char num);
template void GenericStack<string>::push(string num);


//POP
template void GenericStack<int>::pop(int &num);
template void GenericStack<double>::pop(double &num);
template void GenericStack<float>::pop(float &num);
template void GenericStack<char>::pop(char &num);
template void GenericStack<string>::pop(string &num);

