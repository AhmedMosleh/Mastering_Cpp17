#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

string users_path = "users.txt";
string q_path = "q.txt"; // questions path

struct user {
    string u_name;
    int password;
    string name;
    string email;
    bool anonymous;
};

int main() {
  auto status = ios::in | ios::out | ios::app;

  // cout << "Enter number in range 1-2: ";
  string user_name, name, email;
  int password{};
  bool anonymous{};

  cout << "Enter user name. (No spaces): ";
  cin >> user_name;
  cout << "Enter Password";
  cin >> password;
  cout << "Enter name";
  cin >> name;
  cout << "Enter email";
  cin >> email;
  cout << "Allow anonymous";
  cin >> anonymous;

  fstream fusers(users_path.c_str(), status);
  if(fusers.fail()) {
    cout << "can't open\n";
    return 0;
  }
  fusers << "\n";
  fusers << user_name << "\n";
  fusers << password << "\n";
  fusers << name << "\n";
  fusers << email << "\n";
  fusers << anonymous << "\n";

}

// int sign_up()
