/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   List.cpp
 * Author: setler
 * 
 * Created on January 7, 2018, 12:59 PM
 */

#include "List.h"
#include "Node.h"
#include <iostream>

List::List(): Head(0), Tail(0) {
}

List::List(const List& orig) {
}

void List::addNode(int id) {
    Node *node = new Node(id);
    if (!this->Head) {
        this->Head = this->Tail = node;
    } else {
        this->Tail->next = node;
        this->Tail = node;
    }
}

std::ostream& operator<<(std::ostream& stream, List& l) {
    
    Node *Temp = l.Head;
    for (; Temp; Temp = Temp->next) {
        stream << Temp->id << " ";
    }
    
    return stream;
}

std::istream& operator>>(std::istream& stream, List& l) {
    int id;
    stream >> id;
    l.addNode(id);
    
    return stream;
}

void List::showList() {
    Node *Temp = this->Head;
    for (; Temp; Temp = Temp->next) {
        std::cout << Temp->id << " ";
    }
    std::cout << std::endl;
}

void List::sort() {
    bool state;
    Node *Temp;
    do {
        Temp = this->Head;
        state = true;
        while (Temp->next) {
            if (Temp->id > Temp->next->id) {
                int t = Temp->id;
                Temp->id = Temp->next->id;
                Temp->next->id = t;
                state = false;
            }
            Temp = Temp->next;
        }
    } while (!state);
}

List* operator+(List& l1, List& l2) {
    List *new_list = new List;
    Node *Temp = l1.Head;
    while (Temp) {
        new_list->addNode(Temp->id);
        Temp = Temp->next;
    }
    Temp = l2.Head;
    while (Temp) {
        new_list->addNode(Temp->id);
        Temp = Temp->next;
    }
    
    return new_list;
}

List::~List() {
    Node *Temp = this->Head;
    while (Temp) {
        Node *del = Temp->next;
        delete Temp;
        Temp = del;
    }
}
