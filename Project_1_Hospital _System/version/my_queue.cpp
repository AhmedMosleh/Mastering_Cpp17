#include "my_queue.hpp"

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