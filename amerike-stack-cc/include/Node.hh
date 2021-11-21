#pragma once
#include"Dog.hh"

struct Node
{
    Dog* data{};
    Node* next{};

    Node(Dog* data)
    {
        this->data = data;
    }
};
