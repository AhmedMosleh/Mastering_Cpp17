#ifndef _MY
#define _MY
#include <iostream>
using namespace std;

#define MAX_SIZE 100
struct my_queue {
  int arr[MAX_SIZE]{};
  int curr_size = 0;

  void add_end(int value);   // dd to the end of current array
  void add_front(int value); // add to the front of this array
  void remove_front(); // remove the front value and remove it. Return the value
  void print();        // print the array
  void shift_left();
  void shift_right();
};

#endif
