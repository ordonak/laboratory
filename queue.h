#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

struct queueNode{
	int data;
	queueNode* next;
};

class queue{
private:
	queueNode* first, last;
	int size;
public:
	queue();
	queue(int newData);
	~queue();
	void enqueue(int newData);
	int dequeue();
	void printQueue();
};

#endif

