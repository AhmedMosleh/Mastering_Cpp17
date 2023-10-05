// 11_structures_easy.cpp
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

void my_queue::shift_left() {
  for (int i = 1; i < curr_size; i++) {
    arr[i - 1] = arr[i];
  }
}

void my_queue::shift_right() {
  for (int i = curr_size; i > 0; i--) {
    arr[i] = arr[i - 1];
  }
}

void my_queue::add_end(int value) {
  if (curr_size < MAX_SIZE) {
    arr[curr_size++] = value;
  } else {
    cout << "The queue is full\n";
  }
}

void my_queue::add_front(int value) {
  if (curr_size < MAX_SIZE) {
    shift_right();
    arr[0] = value;
    curr_size++;
  } else {
    cout << "The queue is full\n";
  }
}

void my_queue::remove_front() {
  shift_left();
  curr_size--;
}

void my_queue::print() {
  for (int i = 0; i < curr_size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
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