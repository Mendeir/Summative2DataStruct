#include <iostream>
#include "Data.h"
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
	if (isFull())
		cout << "The queue is full.\n";
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

//*********************************************
// Function dequeue removes the value at the  *
// front of the queue, and copies t into num. *
//*********************************************

void IntQueue::dequeue(int &num)
{
	if (isEmpty())
		cout << "The queue is empty.\n";
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


