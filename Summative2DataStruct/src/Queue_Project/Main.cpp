// This program demonstrates the IntQeue class
#include <iostream>
#include "Data.h"
#include <string>
using namespace std;

int main()
{
	try
	{
		IntQueue iQueue(5);
		int value;

		// Attempt to dequeue while empty
		// cout << "Attempting to deque" << '\n';
		// iQueue.dequeue(value);

		cout << "Enqueuing 5 items...\n";
		// Enqueue 5 items.
		for (int x = 0; x < 5; x++)
		{
			cout << "Pushing " << x << '\n';
			iQueue.enqueue(x);
		}
		// Attempt to enqueue while full.
		 cout << "Now attempting to enqueue again...\n";
		 iQueue.enqueue(5);

	}
	catch (runtime_error &errorName) {
		cerr << "Runtime error: " << errorName.what() << '\n'; 
	}
}

