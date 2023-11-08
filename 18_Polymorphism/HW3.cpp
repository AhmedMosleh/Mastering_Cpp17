#include <iostream>
using namespace std;

class Worker {
protected:
  string name;
  int age;
  double salary;
};

class Employee : public Worker {
    bool pay_type; // hourly or salary
    double extra_ratio;
};

class volunteers : public Worker {};


class book {

};

class food {};

class Invoice {

};


