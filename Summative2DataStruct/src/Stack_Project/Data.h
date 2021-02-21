#pragma once
#include <iostream>
#include <string>

using namespace std;

template <typename givenDataType >   // DECLARATION OF TEMPLATE
class GenericStack
{
private:

	givenDataType*stackArray;
	 int stackSize;
	 int top;

public:

	GenericStack(int size);
	void push(givenDataType num);
	void pop(givenDataType &num);
	bool isFull();
	bool isEmpty();
};

