//
// Created by Sean on 5/10/2015.
//

#ifndef CODE_DATA_STRUCTURES_LINKED_LIST_H
#define CODE_DATA_STRUCTURES_LINKED_LIST_H

class Node {
private:
    int data;
    Node* next;

public:
    Node(int num) : data(num), next(nullptr) { }

    int getData() const { return data; }
    Node *getNext() const { return next; }

    void setNext(Node *next) { Node::next = next; }
};

class LinkedList {
private:
    Node* root;

public:
    LinkedList() : root(nullptr) { }
    LinkedList(int data);

    void push_back(int data);
    bool find(int data);
    void remove(int data);
};

#endif //CODE_DATA_STRUCTURES_LINKED_LIST_H
