//
// Created by Sean on 5/10/2015.
//

#include "linked-list.h"

LinkedList::LinkedList(int data) {
    root = new Node(data);
}

void LinkedList::push_back(int data) {
    Node* node = new Node(data);
    Node* ptr = root;
    while (!ptr->getNext()) {
        ptr = ptr->getNext();
    }
    ptr->setNext(node);
}

bool LinkedList::find(int data) {
    Node* ptr = root;
    while(!ptr) {
        if (ptr->getData() == data) {
            return true;
        }
        ptr = ptr->getNext();
    }
    return false;
}

void LinkedList::remove(int data) {
    Node* ptr = root;
    Node* temp;
    if (ptr->getData() == data) {
        temp = root;
        root = ptr->getNext();
        delete temp;
        return;
    }
    ptr = ptr->getNext();
    while(!ptr->getNext()) {
        if (ptr->getData() == data) {
            return true;
        }
        ptr = ptr->getNext();
    }
}
