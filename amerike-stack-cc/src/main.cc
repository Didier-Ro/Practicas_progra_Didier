#include<iostream>
#include "Stack.hh"

int main()
{
    Dog* dog1{new Dog(2,"spike","Pastor aleman")};
    Dog* dog2{new Dog(2,"miguel","chihuahua")};
    Dog* dog3{new Dog(2,"ignacio","beagle")};

    Stack* stack1{new Stack()};

    stack1->Push(dog1);
    stack1->Push(dog2);
    stack1->Push(dog3);

    stack1->Print();

    std::cin.get();
    return 0;
}