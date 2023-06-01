#include <iostream>

using namespace std;

template <typename T>
class Array
{
public:
  Array(int size, T initValue);
  ~Array();

  Array(const Array<T> &other);               // Copy constructor
  Array<T> &operator=(const Array<T> &other); // Copy assignment operator

  void print();

private:
  int size;
  T *p;
};

template <typename T>
Array<T>::Array(int size, T initValue)
{
  this->size = size;
  p = new T[this->size];
  for (int i = 0; i < size; i++)
  {
    p[i] = initValue;
  }
}

template <typename T>
Array<T>::~Array()
{
  delete[] this->p;
}

template <typename T>
void Array<T>::print()
{
  // Todo
}

template <typename T>
Array<T>::Array(const Array<T> &other)
{
  this->size = other.size;
  p = new T[this->size];

  for (int i = 0; i < this->size; i++)
    p[i] = other.p[i];

  cout << "Call copy constructor" << endl;
};

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &other){
  if (this == &other) {
    return *this;
  }

  delete[] p;
  this->size = other.size;
  this->p = new T[this->size];

  for (int i = 0; i < this->size; i++) {
    p[i] = other.p[i];
  }
  
  cout << "Call assignment operator" << endl;
};
