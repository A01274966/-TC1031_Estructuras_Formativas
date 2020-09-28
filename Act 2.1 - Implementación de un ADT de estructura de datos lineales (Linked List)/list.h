#ifndef LIST_H_
#define LIST_H_

#include<iostream>
#include<sstream>
using namespace std;

template <class T> class List;
template <class T>
class Link
{
private:
    Link();
    Link(T);
    Link(T, Link<T>*);
    T value;
    Link<T>* next;
    friend class List<T>;
};

template <class T>
Link<T>:: Link(): value(0), next(0){}
template <class T>
Link<T>:: Link(T val): value(val), next(0){}
template <class T>
Link<T>:: Link(T val, Link* nx): value(val), next(nx){}



template <class T>
class List
{
private:
    Link<T>* head;
    int size;
public:
    List();
    string toString() const;
    void add(T);
    int find(T);
    void update(int, int);
    T remove(int);
};

template <class T>
List<T>::List():head(0), size(0){}

template <class T>
string List<T>::toString() const
{
  stringstream aux;
  Link<T> *p;
  p = head;
  aux << "[";
  while (p != 0) 
  {
      aux << p->value;
      if (p->next != 0) 
      {
          aux << ", ";
      }
      p = p->next;
  }
  aux << "]";
  return aux.str();
}

template <class T>
void List<T>:: add(T newVal)
{
  Link<T> *newLink, *p;
  newLink = new Link<T>(newVal);
  
  if(head == 0)
  {
      newLink->next = head;
      head = newLink;
      size++;
      return;
  }
  p = head;
  while(p->next != 0)
  {
      p = p->next;
  }
  newLink->next = 0;
  p->next = newLink;
  size++;
}
template <class T>
int List<T>:: find(T val)
{
  Link<T>* p;
  p = head;
  int pos = 0;
  while(pos<size){
      
      if (val == p->value)
          return pos;

      p = p->next;
      pos++;
  }
  return -1;
}

template <class T>
void List<T>:: update(int index, int val)
{
  Link<T>* p;
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
T List<T>::remove(int index)
{
  T val;
  Link<T>* p,*q;
  if(head == 0)
      return -1;
  
  if (index == 0)
  {
      p = head;
      head = p->next;
      val = p->value;
      delete p;
      size--;
  }
  else
  {
      p = head;
      q = p->next;
      for(int i = 1; i < size; i++)
      {
          if(i == index)
          {
              val = q->value;
              p->next = q->next;
              delete q;
              size--;
          }
          p = p->next;
          q = q->next;
      }
  }

  return val;
}

#endif