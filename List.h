/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   List.h
 * Author: setler
 *
 * Created on January 7, 2018, 12:59 PM
 */

#ifndef LIST_H
#define LIST_H

#include "Node.h"
#include <iostream>

class List {
public:
    List();
    List(const List& orig);
    virtual ~List();
    
    void addNode(int id);
    void sort();
    void showList();
    
    friend std::ostream& operator<<(std::ostream &stream, List &l);
    friend std::istream& operator>>(std::istream &stream, List &l);
    friend List* operator+(List &l1, List &l2);
    
private:
    Node *Head;
    Node *Tail;
};

#endif /* LIST_H */

