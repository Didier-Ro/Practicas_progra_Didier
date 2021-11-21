#pragma once
#include<iostream>
#include"Node.hh"

class Stack
{
private:
    Node* head{};
public:
    Stack();
    ~Stack();

    Node* Peek() const;
    void Pop();
    void Push(Dog* dog);
    bool IsEmpty() const;
    void Print();
};

