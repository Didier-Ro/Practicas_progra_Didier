<<<<<<< HEAD
#pragma once
#include "Book.hh"

struct Node
{
  Book* data{};
  Node* next{};
  Node(Book* book)
  {
    data = book;
  }
};
=======
#pragma once
#include "Book.hh"

struct Node
{
  Book* data{};
  Node* next{};
  Node(Book* book)
  {
    data = book;
  }
};
>>>>>>> af4ffcfe9d30511516f555c04d4f0a840858c7ca
