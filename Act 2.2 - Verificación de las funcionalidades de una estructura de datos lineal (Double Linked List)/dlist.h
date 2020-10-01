#ifndef DLIST_H_
#define DLIST_H_

#include <string>
#include <sstream>
#include <iostream>
using namespace std;

template <class T> class DList;
template <class T>
class DLink
{
private:
    DLink(T);
    DLink(T, DLink<T>, DLink<T>);
    T value;
    DLink<T> *previous;
    DLink<T>* next;
    friend class DList<T>;
};

template <class T>
DLink<T>:: DLink(T val): value(val), previous(0), next(0){}
template <class T>
DLink<T>:: DLink(T val, DLink pre, DLink nx): value(val), previous(pre), next(nx){}

template <class T>
class DList
{
private:
    DLink<T>* head;
    DLink<T> * tail;
    int size;
public:
    DList();
    string toStringForward() const;
    string toStringBackward() const;
    void add(T);
    int find(T);
    void update(int, int);
    T remove(int);
};

template <class T>
DList<T>::DList():head(0), tail(0),size(0){}

template <class T>
string DList<T>::toStringForward() const {
	stringstream aux;
	DLink<T> *p;
	p = head;
	aux << "[";
	while (p != 0) {
		aux << p->value;
		if (p->next != 0) {
			aux << ", ";
		}
		p = p->next;
	}
	aux << "]";
	return aux.str();
}

template <class T>
string DList<T>::toStringBackward() const {
	stringstream aux;
	DLink<T> *p;
	p = tail;
	aux << "[";
	while (p != 0) {
		aux << p->value;
		if (p->previous != 0) {
			aux << ", ";
		}
		p = p->previous;
	}
	aux << "]";
	return aux.str();
}

template <class T>
void DList<T>::add(T newVal) {
	DLink<T> *newLink;

	newLink = new DLink<T>(newVal);

	if (head == 0 && tail == 0) {
		head = newLink;
		tail = newLink;
	} else {
		tail->next = newLink;
		newLink->previous = tail;
		tail = newLink;
	}
	size++;
}

template <class T>
int DList<T>:: find(T val)
{
  DLink<T>* p;
  p = head;
  int pos = 0;
  while(pos<size)
  {
      if (val == p->value)
          return pos;

      p = p->next;
      pos++;
  }
  return -1;
}

template <class T>
void DList<T>:: update(int index, int val)
{
  DLink<T>* p;
  if(head == 0)
  {
      return;
  }
  p = head;
  for(int i=0;i<size && p!=0;i++)
  {
      if(i == index)
      {
          p->value = val;
          return;
      }
      p = p->next;
  } 
}

template <class T>
T DList<T>::remove(int index)
{
  T val;
  DLink<T>* p;
  int pos = 0;
	p = head;
	val = p->value;

  if(head == 0 && tail == 0)
  {return -1;}

  if (index == 0)
  {
    if (head == tail) 
    {
      head = 0;
      tail = 0;
    } 
    else
    {
      head = p->next;
      p->next->previous = 0;
    }
    delete p;
    size--;
  }
  else
  {
    while (pos != index) {
      p = p->next;
      pos++;
    }

    val = p->value;
    p->previous->next = p->next;
    if (p->next != 0) 
    {
      p->next->previous = p->previous;
    }
    size--;

    delete p;

    return val;
  }

  return val;
}

#endif