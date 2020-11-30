#ifndef HEAP_H_
#define HEAP_H_

#include <string>
#include <sstream>
#include <iostream>

using namespace std;

template <class T>
class Heap
{
  private:
    T*data;
    unsigned int tamano;
    unsigned int count;
    unsigned int parent(unsigned int) const;
    unsigned int left(unsigned int) const;
    unsigned int right(unsigned int) const;
    void heapify(unsigned int);
    void swap(unsigned int, unsigned int);
  public:
    Heap(unsigned int);
    void push(T);
    void pop();
    T top();
    bool empty() const;
    T size() const;
    string toString() const;
};

template <class T>
unsigned int Heap<T>::parent(unsigned int pos) const 
{
	return ((pos - 1)/2);
}

template <class T>
unsigned int Heap<T>::left(unsigned int pos) const 
{
	return ((2* pos) + 1);
}

template <class T>
unsigned int Heap<T>::right(unsigned int pos) const 
{
	return ((2* pos) + 2);
}

template <class T>
void Heap<T>::heapify(unsigned int pos) 
{
	unsigned int lft = left(pos);
	unsigned int rgt = right(pos);
	unsigned int min = pos;
	if (lft <= count && data[lft] < data[min]) 
  {
		min = lft;
	}
	if (rgt <= count && data[rgt] < data[min]) 
  {
		min = rgt;
	}
	if (min != pos) {
		swap(pos, min);
		heapify(min);
	}
}

template <class T>
void Heap<T>::swap(unsigned int i, unsigned int j) 
{
	T aux = data[i];
	data[i] = data[j];
	data[j] = aux;
}

template <class T>
Heap<T>::Heap(unsigned int tam) 
{
	tamano = tam;
	data = new T[tamano];
	count = 0;
}

template <class T>
void Heap<T>::push(T val) 
{
	unsigned int pos;
	pos = count;
	count++;
	
	while (pos > 0 && val < data[parent(pos)])
  {
		data[pos] = data[parent(pos)];
		pos = parent(pos);
	}
	data[pos] = val;
}

template <class T>
void Heap<T>::pop()
{
	data[0] = data[--count];
	heapify(0);
}

template <class T>
T Heap<T>::top(){
	return data[0];
}

template <class T>
bool Heap<T>::empty() const 
{
	return (count == 0);
}

template <class T>
T Heap<T>::size() const
{
  return count;
}

template <class T>
std::string Heap<T>::toString() const 
{
	std::stringstream aux;
	aux << "[";	for (unsigned int i = 0; i < count; i++) 
  {
		if (i != 0) 
    {
			aux << " ";
		} aux << data[i];
	} aux << "]";
	return aux.str();
}

#endif
