#include "Stack.h"
#ifndef _STACK_IMPLEMENTATION_INCLUDED__
#define _STACK_IMPLEMENTATION_INCLUDED__
template<class DataType>
inline Stack<DataType>::Stack(int maxSize){
	this->tos = -1;
	this->maxSize = maxSize;
	this->arr = new DataType[maxSize];
}

template<class DataType>
inline Stack<DataType>::Stack(const Stack<DataType>& other) {
	this->maxSize = other.maxSize;
	this->tos = other.tos;
	this->arr = new DataType[other.maxSize];
}

template<class DataType>
inline Stack<DataType>& Stack<DataType>::operator=(const Stack<DataType>& other){
	if (this != &other) {
		this->maxSize = other.maxSize;
		this->tos = other.tos;
		this->arr = new DataType[other.maxSize];
	}
	return *this;
}

template<class DataType>
inline Stack<DataType>::~Stack<DataType>(){
	delete[] this->arr;
}

template<class DataType>
inline bool Stack<DataType>::isEmpty() const{
	return this->tos == -1;
}

template<class DataType>
inline bool Stack<DataType>::isFull() const{
	return tos == maxSize - 1;
}

template<class DataType>
inline void Stack<DataType>::push(DataType elem){
	if (isFull()) {
		std::cout << "Stack overflow!" << std::endl;
	}
	else {
		arr[++tos] = elem;
		maxSize++;
	}
}

template<class DataType>
inline void Stack<DataType>::pop(){
	if (isEmpty()) {
		std::cout << "The stack is empty, nothing to remove!" << std::endl;
	}
	else {
		arr[tos--];
		maxSize--;
	}
}

template<class DataType>
inline DataType Stack<DataType>::top() {
	if (!isEmpty()) return arr[tos];
	else 
		std::cout << "The stack is empty!" << std::endl;
}
#endif //_STACK_IMPLEMENTATION_INCLUDED__