#pragma once
#include <string>
using namespace std;

template <typename givenDataType>
class IntStack
{
private:
	givenDataType*stackArray;
	givenDataType stackSize;
	givenDataType top;

public:

	IntStack(givenDataType size);
	void push(givenDataType num);
	void pop(givenDataType&num);
	bool isFull();
	bool isEmpty();
};
