#include <iostream>
using namespace std;
#include "my_queue.hpp"
int main() {
  // let's code
  my_queue q;
  q.add_end(10);
  q.add_end(20);
  q.add_end(30);
  q.add_end(40);
  q.print();
  q.add_front(-5);
  q.add_front(-5);
  q.print();
  q.remove_front();
  q.print();
}