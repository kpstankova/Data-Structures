#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include<iostream>
#include<fstream>
template <class DataType>
class Stack {
private:
	int maxSize;
	int tos;
	DataType* arr;
public:
	Stack<DataType>(int maxSize = 100);
	Stack<DataType>(const Stack<DataType>&);
	Stack<DataType>& operator=(const Stack<DataType>&);
	~Stack<DataType>();

	bool isEmpty()const;
	bool isFull() const;
	void push(DataType);
	void pop();
	DataType top();

};
#include "Stack.inl"
#endif //STACK_H_INCLUDED


