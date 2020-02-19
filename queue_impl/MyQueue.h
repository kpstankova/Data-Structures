#ifndef MYQUEUE_H_INCLUDED
#define MYQUEUE_H_INCLUDED
#include<iostream>
struct Node {
	int val;
	Node* next;
	Node(int val, Node* next = nullptr) {
		this->val = val;
		this->next = next;
	}
};
class MyQueue {
private:
	Node* front, *back;
	size_t count;
	Node* copy(const Node*);
	void clear(Node*);
public:
	MyQueue();
	MyQueue(const MyQueue&);
	MyQueue& operator=(const MyQueue&);
	~MyQueue();

	bool isEmpty()const;
	void enqueue(int);
	int dequeue();
	size_t size()const;
	int getFront()const;
	Node* getLast(Node*);
};
#endif //MYQUEUE_H_INCLUDED
