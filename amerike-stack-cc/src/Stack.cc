#include "Stack.hh"

Stack::Stack()
{
}

Stack::~Stack()
{
}

Node* Stack::Peek() const
{
  if(IsEmpty())
  {
    std::cout << "stack empty" << std::endl;
  }
  return head;
}
void Stack::Pop()
{
  if(IsEmpty())
  {
    std::cout << "stack empty" << std::endl;
  }
  else
  {
    Node* temp{head};
    head = head->next;
    delete temp;
  }
}
void Stack::Push(Dog* dog)
{
  if(IsEmpty())
  {
    head = new Node(dog);
  }
  else
  {
    Node* temp{head};
    head = new Node(dog);
    head->next = temp;
  }

}
bool Stack::IsEmpty() const
{
  return head == nullptr;
}
void Stack::Print()
{
  if(IsEmpty())
  {
    std::cout << "stack empty" << std::endl;
  }
  else
  {
    Node* temp{head};
    while (temp)
    {
      std::cout << "Dog name: " << temp->data->GetName() << std::endl;
      std::cout << "Dog age: " << temp->data->GetAge() << std::endl;
      std::cout << "Dog breed: " << temp->data->GetBreed() << std::endl;
      std::cout << std::endl;
      temp = temp->next;
    }
  }
}