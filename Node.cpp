/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Node.cpp
 * Author: setler
 * 
 * Created on January 7, 2018, 12:50 PM
 */

#include "Node.h"

Node::Node(): next(0) {
}

Node::Node(int id): id(id), next(0) {
}

Node::Node(const Node& orig) {
}

Node::~Node() {
}

