#pragma once

class IntQueue
{
private:
	int *queueArray;
	int queueSize;
	int front;
	int rear;
	int numItems;
	bool isFull();
	bool isEmpty();

public:
  IntQueue(int);
  ~IntQueue();
  void enqueue(int);
  void dequeue(int &);
  void clear();
  void errorMethod(string errorName);
};
