#pragma once
#include <string.h>
class IntStack
{
private:
	int* IntegerArray;
	char* CharacterArray;
	char* stringArray[100];
	float* FloatArray;
	int stackSize;
	int top;

public:
	IntStack(int size);


	void pushString(char x[]);
	void popString(char& x);

	void pushInteger(int Integernum);
	void popInteger(int& Integernum);


	void pushFloat(float Floatnum);
	void popFloat(float& Floatnum);

	void pushCharacter(char charArr);
	void popCharacter(char& charArr);


	bool isFull();
	bool isEmpty();
};
