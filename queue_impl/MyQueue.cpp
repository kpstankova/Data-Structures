#include "MyQueue.h"

Node* MyQueue::copy(const Node* other){
	if (!other) return nullptr;
	Node* current = new Node(other->val);
	this->front = current;
	while (other->next) {
		other = other->next;
		current->next = new Node(other->val);
		current = current->next;
	}
	back = current;
	return this->front;
}

void MyQueue::clear(Node* n){
	while (n) {
		Node* p = n;
		n = n->next;
		delete p;
	}
}

MyQueue::MyQueue(){
this->front = nullptr;
this->back = nullptr;
this->count = 0;
}

MyQueue::MyQueue(const MyQueue& other){
	this->count = other.count;
	this->front = copy(other.front);
	this->back = getLast(this->front);
}

MyQueue& MyQueue::operator=(const MyQueue& other){
	if (this!=&other){
		this->count = other.count;
		this->front = copy(other.front);
		this->back = getLast(this->front);
	}
	return *this;
}

MyQueue::~MyQueue(){
	clear(this->front);
	std::cout << "Destructor" << std::endl;
}

bool MyQueue::isEmpty() const
{
	return front == nullptr;
}

void MyQueue::enqueue(int a){
	Node* n = new Node(a);
	if (!isEmpty()) back->next = n;
	else this->front = n;
	back = n;
	++count;
}

int MyQueue::dequeue(){
	if (isEmpty()) std::cout << "Error!" << std::endl;
	Node* n = this->front;
	this->front = n->next;
	int x = n->val;
	--count;
	delete n;
	return x;
}

size_t MyQueue::size() const
{
	return count;
}

int MyQueue::getFront() const{
	if (isEmpty()) std::cout << "Error!" << std::endl;
	return this->front->val;
}

Node* MyQueue::getLast(Node* n ){
	if (!n) return nullptr;
	while (n->next) n = n->next;
	return n;
	
}
