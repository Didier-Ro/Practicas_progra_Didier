<<<<<<< HEAD
#pragma once
#include<iostream>
#include "Node.hh"

class Queue
{
private:
    Node* head{};
    Node* end{};
public:
    Queue();
    ~Queue();
    Node* Peek() const;
    void Pop();
    void Push(Book* book);
    bool IsEmpty() const;
    void Print();
};
=======
#pragma once
#include<iostream>
#include "Node.hh"

class Queue
{
private:
    Node* head{};
    Node* end{};
public:
    Queue();
    ~Queue();
    Node* Peek() const;
    void Pop();
    void Push(Book* book);
    bool IsEmpty() const;
    void Print();
};
>>>>>>> af4ffcfe9d30511516f555c04d4f0a840858c7ca
