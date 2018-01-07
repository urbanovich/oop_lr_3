/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Node.h
 * Author: setler
 *
 * Created on January 7, 2018, 12:50 PM
 */

#ifndef NODE_H
#define NODE_H

class Node {
    
public:

    int id;
    Node *next;
    
    Node();
    Node(int id);
    
    Node(const Node& orig);
    virtual ~Node();
private:

};

#endif /* NODE_H */

