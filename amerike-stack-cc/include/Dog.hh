#pragma once

class Dog
{
private:
    unsigned int age{};
    const char* name{};
    const char* breed{};
public:
    Dog(unsigned int age, const char* name, const char* breed);
    ~Dog();

    unsigned int GetAge() const;
    const char* GetName() const;
    const char* GetBreed() const;
};


