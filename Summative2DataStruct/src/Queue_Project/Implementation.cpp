#include <iostream>
#include "Data.h"
#include <string>
using namespace std;

//*************************
// Constructor            *
//*************************
IntQueue::IntQueue(int s)
{
	queueArray = new int[s];
	queueSize = s;
	front = -1;
	rear = -1;
	numItems = 0;
}

//*************************
// Destructor             *
//*************************

IntQueue::~IntQueue()
{
  delete [] queueArray;
}

//********************************************
// Function enqueue inserts the value in num *
// at the rear of the queue.                 *
//********************************************

void IntQueue::enqueue(int num)
{
	try {
		if (isFull()) 
			errorMethod("Queue overflow exception");
		else
		{
			// Calculate the new rear position
			rear = (rear + 1) % queueSize;
			// Insert new item
			queueArray[rear] = num;
			// Update item count
			numItems++;
		}
	}
	catch (runtime_error &errorName) {
		cerr << "Runtime Error: " << errorName.what() << '\n';
	}
}

//*********************************************
// Function dequeue removes the value at the  *
// front of the queue, and copies t into num. *
//*********************************************

void IntQueue::dequeue(int &num)
{
	try {
		if (isEmpty())
			//errorMethod("Queue underflow exception");
		else
		{
			// Move front
			front = (front + 1) % queueSize;
			// Retrieve the front item
			num = queueArray[front];
			// Update item count
			numItems--;
		}
	}
	catch (runtime_error& errorName) {
		cerr << "Runtime Error: " << errorName.what() << '\n';
	}
}
//*********************************************
// Function isEmpty returns true if the queue *
// is empty, and false otherwise.             *
//*********************************************

bool IntQueue::isEmpty()
{
	bool status;

	if (numItems)
		status = false;
	else
		status = true;

	return status;
}

//********************************************
// Function isFull returns true if the queue *
// is full, and false otherwise.             *
//********************************************

bool IntQueue::isFull()
{
	bool status;
	if (numItems < queueSize)
		status = false;
	else
		status = true;

	return status;
	
}
//*******************************************
// Function clear resets the front and rear *
// indices, and sets numItems to 0.         *
//*******************************************

void IntQueue::clear()
{
	front = queueSize - 1;
	rear = queueSize - 1;
	numItems = 0;
}

// function for throwing runtime error

void IntQueue::errorMethod(string errorName)
{
	throw(runtime_error(errorName));
}
