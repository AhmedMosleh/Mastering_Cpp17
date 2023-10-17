
#include <iostream>
using namespace std;

// Homework 1: Initializer list!
// We learned that it is recommended to use the initializer list for constructor
// Assume we have a class of several variables (e.g. a, b, c in order)
// But the initializer list is b, a, c
// Will the constructor initialize based on class order or initializer-list
// order? Also, what is the order of the destructor?
// It is preferred to learn
// the answer by reading a book/reference But, implement a program that its
// results can help us answer the 2 questions

// // to answer
// class test {
//   int a, b, c;

// public:
//   test() : b(a + 1), a(5), c(b + 1) {
//     cout << a << " " << b << " " << c;
//     cout << endl;
//   }
// };

// int main() { test t1; }

// Homework 2: Guess me!
// 1) What are the possible ways to finish Class C
// constructor?
// 2) How many times ClassA Constructor will be called? Why?

// Give a tip for the coder
// provid defualt constarctor. 

// class A {
// public:
//   A() { cout << "A constractor\n"; }
// };

// class B {
//   A aa;
//   int x;

// public:
//   B(int x) {
//     this->aa = A();
//     this->x = x;
//   }
// };

// class C {
//   int &y;
//   B bb;

// public:
//     C(int &y,const B &bb) : y(y),bb(bb) {

//     }

// };

// int main() {
//     int hello = 10;
//     B b(5);
//     C cc(hello,b);
// }


// Homework 3: Const & In constructor
// In a recent code review, senior TL
// asked you to change the constructor
// to use const and &
// Why do you think so?



// Homework 4: Validations!
// Figure out one bug in this code
// Fix it
// the constractor must be in public section to enable of decleration.




// Provide a tip for the coder!
// use delegation.

// Figure out another potential bug
// Provide a tip for the coder!
// provide a defualt constractor.



