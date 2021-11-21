<<<<<<< HEAD
#pragma once

class Book
{
private:
  const char* name{};
  unsigned int pagesCount{};
  const char* authorName{};
public:

  Book(const char* name, unsigned int pagesCount, const char* authorName);
  ~Book();

  const char* GetName() const;
  unsigned int GetPagesCount() const;
  const char* GetAuthorName() const;
};

=======
#pragma once

class Book
{
private:
  const char* name{};
  unsigned int pagesCount{};
  const char* authorName{};
public:

  Book(const char* name, unsigned int pagesCount, const char* authorName);
  ~Book();

  const char* GetName() const;
  unsigned int GetPagesCount() const;
  const char* GetAuthorName() const;
};

>>>>>>> af4ffcfe9d30511516f555c04d4f0a840858c7ca
