/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LinkedList.cpp
 * Author: FELIPES
 * 
 * Created on October 5, 2017, 2:59 PM
 */

#include "LinkedList.h"
#include <cstddef>
#include <iostream>
#include <string>


template <typename T>
LinkedList<T>::LinkedList()
{
    head = NULL; // set head to NULL
    tail = NULL; // set tail to NULL
}

template <typename T>
void LinkedList<T>::addFirst(T val)
{
    Node<T> *n = new Node<T>();   // create new Node
    n->data = val;             // set value
    n->next = head;         // make the node point to the next node.
                            //  If the list is empty, this is NULL, so the end of the list --> OK
    head = n;               // last but not least, make the head point at the new node.
}

template <typename T>
void LinkedList<T>::addLast(T val)
{
    Node<T> *newNode = new Node<T>();
    newNode->data = val;
    newNode->next = NULL;
    Node<T>* temp = head;
    if (temp != NULL) 
    {
        while (temp->next != NULL) 
	{
            temp = temp->next;
	}
    temp->next = newNode;
    }
    else 
    {
        head = newNode;
    }
}

template <typename T>
void LinkedList<T>::removeValue(T val)
{
    Node<T> *current =new Node<T>;
    Node<T> *previous=new Node<T>;
    current=head;
    while(current->next!=NULL)
    {
        if(current->data == val)
        {
            previous->next = current->next;
            delete current;
            break;
        }
        previous=current;
        current=current->next;
    }
    
}

template <typename T>
void LinkedList<T>::display()
{
    Node<T> *temp=new Node<T>;
    temp=head;
    std::cout << "[";
    while(temp!=NULL)
    {
      std::cout << temp->data;
      if(temp->next!=NULL) std::cout << ",";
      temp=temp->next;
    }
    std::cout << "]" << std::endl;
}

template <typename T>
int LinkedList<T>::size()
{
  int count = 0;
  Node<T> *temp;
  temp=head;
  while(temp!=NULL)
  {
      count++;
      temp = temp->next;
  }
  return count;
} 

template <typename T>
bool LinkedList<T>::isEmpty()
{
    if(head==NULL && tail==NULL) return true;
    else return false;
}

/*
template <typename T>
std::string* LinkedList<std::string>::toString()
{
    std::string str = "";
    Node<T> *temp=new Node<T>;
    temp=head;
    str = str + "[";
    while(temp!=NULL)
    {
      str = str + (std::string)temp->data;
      if(temp->next!=NULL) str = str + ",";
      temp=temp->next;
    }
    str = str +"]" + std::endl;
    return str;
}
*/

/* TO IMPLEMENT GET METHOD
template <typename T> struct TypeSelector
{
   using type = std::string;
};
std::string get(int i)
{
    std::string str = "";
    
    
    return str;
}
 */