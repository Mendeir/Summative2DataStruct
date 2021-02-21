#pragma once
#include <string>
using namespace std;

template <typename givenDataType>
class IntStack
{
private:
	givenDataType*stackArray;
	int stackSize;
	int top;

public:

	IntStack(int size);
	void push(givenDataType num);
	void pop(givenDataType &num);
	bool isFull();
	bool isEmpty();
};
