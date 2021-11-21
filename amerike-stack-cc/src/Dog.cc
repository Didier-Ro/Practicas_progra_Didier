#include"Dog.hh"

Dog::Dog(unsigned int age, const char* name, const char* breed)
{
    this->age = age;
    this->name = name;
    this->breed = breed;
}

Dog::~Dog()
{
}

unsigned int Dog::GetAge() const
{
  return age;
}
const char* Dog::GetName() const
{
  return name;
}
const char* Dog::GetBreed() const
{
  return breed;
}