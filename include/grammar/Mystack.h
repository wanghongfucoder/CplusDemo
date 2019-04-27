#ifndef _MY_STACK_H
#define _MY_STACK_H
#include "common_src.h"

template <typename Type>
class Mystack {
 private:
  enum { SIZE = 10 };
  int stacksize;
  Type *items;
  int top;
  
 public:
  explicit Mystack(int ss = SIZE);
  //   Mystack(const MyStack<Type> &st);
  bool isEmpty() { return top == 0; }
  bool isfull() { return top == stacksize; }
  bool push(const Type &item);
  bool pop(Type &item);
  Mystack &operator=(const Type &st);
  ~Mystack();
};

template <typename Type>
Mystack<Type>::Mystack(int ss) : stacksize(ss), top(0) {
  items = new Type[stacksize];
}
// template <typename Type>
// Mystack<Type>::Mystack(const Mystack &st) {

// }

#endif  // _MY_STACK_H#define endif
