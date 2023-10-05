#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

#define MAX_BOOKS 10
#define MAX_USERS 10
#define MAX_BORR 5

struct book {
  int id{};
  string name{""};
  int quantity{};
  int borr{};
};

struct user {
  string name{""};
  int id{};
  book borr_books[MAX_BORR];
  int num_borr{};
};

struct library {
  book lib_books[MAX_BOOKS];
  user lib_users[MAX_USERS];
  int num_books{};
  int num_users{};

  void add_book();
  void search_by_prefix();
  void print_who_borr_name();
  void print_lib_id();
  void print_lib_name();
  void add_user();
  void user_borrow_book();
  void user_return_book();
  void print_users();
};

bool compare_books_id(book &b1, book &b2) { return b1.id < b2.id; }

bool compare_books_name(book &b1, book &b2) {
  if (b1.name != b2.name)
    return b1.name < b2.name;
  return b1.id < b2.id;
}

void library::add_book() {
  if (num_books < MAX_BOOKS) {
    cout << "Enter book info: id & name & total quantity: ";
    cin >> lib_books[num_books].id >> lib_books[num_books].name;
    cin >> lib_books[num_books].quantity;
    cout << endl;
    num_books++;
  } else {
    cout << "full!!!!\n";
  }
}
void library::search_by_prefix() {}
void library::print_who_borr_name() {}

void library::print_lib_id() {
  sort(lib_books, lib_books + num_books, compare_books_id);
  for (int i = 0; i < num_books; i++) {
    cout << "id = " << lib_books[i].id << " name = " << lib_books[i].name
         << " total_quantity = " << lib_books[i].quantity
         << " total_borrowed = " << lib_books[i].borr << endl;
  }
}
void library::print_lib_name() {
  sort(lib_books, lib_books + num_books, compare_books_name);
  for (int i = 0; i < num_books; i++) {
    cout << "id = " << lib_books[i].id << " name = " << lib_books[i].name
         << " total_quantity = " << lib_books[i].quantity
         << " total_borrowed = " << lib_books[i].borr << endl;
  }
}

void library::add_user() {
  if (num_users < MAX_USERS) {
    cout << "Enter user name & national id: ";
    cin >> lib_users[num_users].name >> lib_users[num_users].id;
    cout << endl;
    num_users++;
  } else {
    cout << "full!!!!\n";
  }
}
void library::user_borrow_book() {
  string in_user{""};
  string in_book{""};
  cout << "Enter user name and book name: ";
  cin >> in_user >> in_book;
  cout << endl;
  // initialize the idx by -1
  int user_idx = -1;
  int book_idx = -1;
  // search the user
  for (int i = 0; i < num_users; i++) {
    if (lib_users[i].name == in_user) {
      user_idx = i;
      break;
    }
  }
  // search for the book
  for (int i = 0; i < num_books; i++) {
    if (lib_books[i].name == in_book) {
      book_idx = i;
      break;
    }
  }
  if (user_idx != -1 && book_idx != -1) {
    lib_users[user_idx].borr_books[lib_users[user_idx].num_borr] =
        lib_books[book_idx];
    lib_users[user_idx].num_borr++;
    lib_books[book_idx].borr++;
  }
}
void library::user_return_book() {
  string in_user{""};
  string in_book{""};
  cout << "Enter user name and book name: ";
  cin >> in_user >> in_book;
  cout << endl;
  // initialize the idx by -1
  int user_idx = -1;
  int book_idx = -1;
  // search the user
  for (int i = 0; i < num_users; i++) {
    if (lib_users[i].name == in_user) {
      user_idx = i;
      break;
    }
  }
  // search for the book
  for (int i = 0; i < num_books; i++) {
    if (lib_books[i].name == in_book) {
      book_idx = i;
      break;
    }
  }
  if (user_idx != -1 && book_idx != -1) {
    lib_users[user_idx].num_borr--;
    lib_books[book_idx].borr--;
  }
}

void library::print_users() {
  for (int i = 0; i < num_users; i++) {
    cout << "user " << lib_users[i].name << " id " << lib_users[i].id
         << " borrowed books ids: ";
    for (int j = 0; j < lib_users[i].num_borr; j++) {
      cout << lib_users[i].borr_books[j].id << " ";
    }
    cout << endl;
  }
}

void library_system() {
  library mylib;
  int option = -1;
  while (true) {
    do {
      cout << "Enter your menu choice [1 - 10]: ";
      cin >> option;
      cout << endl;
    } while (!(1 <= option && option <= 10));
    switch (option) {
    case 1:
      mylib.add_book();
      break;
    case 2:
      //@todo:
      mylib.search_by_prefix();
      break;
    case 3:
      //@todo:
      mylib.print_who_borr_name();
      break;
    case 4:
      mylib.print_lib_id();
      break;
    case 5:
      mylib.print_lib_name();
      break;
    case 6:
      mylib.add_user();
      break;
    case 7:
      mylib.user_borrow_book();
      break;
    case 8:
      mylib.user_return_book();
      break;
    case 9:
      mylib.print_users();
      break;
    case 10:
      cout << "GOOD BEY!\n";
      return;
      break;
    }
  }
}
int main() {
  freopen("books.txt", "rt", stdin);
  library_system();
}