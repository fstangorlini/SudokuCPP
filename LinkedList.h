/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   LinkedList.h
 * Author: FELIPES
 *
 * Created on October 5, 2017, 2:59 PM
 */

//#include "Cell.h"
#include <string>
#ifndef LINKEDLIST_H
#define LINKEDLIST_H


template <typename T>
struct Node
{
    T data;
    Node<T> *next;
};

template <typename T>
class LinkedList
{
    Node<T> *head;
    Node<T> *tail;

public:
    LinkedList<T>();
    void addFirst(T val);
    void addLast (T val);
    void insertAt(int pos, T val);
    void removeValue(T val);
    void display();
    int  size();
    bool isEmpty();
    std::string * toString();
    //std::string* get(int i);

private:


};

#endif /* LINKEDLIST_H */

