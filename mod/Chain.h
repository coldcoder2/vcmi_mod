#pragma once

#include "stdafx.h"

template<class T>
struct chainNode
{
	T m_element;
	chainNode<T>* m_next[];
	int m_size;

	chainNode(const T& element = NULL,const chainNode<T>* next[] = nullptr,const int& size = 0) : m_element(element),m_next(next),m_size(size) {}
};

template<class T>
class chain
{
public:
	chain() { head = new chainNode<T>(); }
	~chain();
private:
	chainNode<T>* head;
	bool Delete(chainNode<T>* node);
};

template<class T>
bool chain<T>::Delete(chainNode<T>* node)
{
	chainNode<T>* next;
	for (int i = 0; i < node->m_size; i++)
	{
		next = node->m_next[i];
		Delete(next);
		delete[] node->m_next[i];
	}
	delete[] node->m_next;

}

template <class T>
chain<T>::~chain()
{

}