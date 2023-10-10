#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

string users_path = "users.txt";
string names_path = "names.txt";
string pw_path = "pw.txt";
string unknown_path = "unknown.txt";

string q_path = "q.txt"; // questions path

auto status = ios::in | ios::out | ios::app;
fstream fusers(users_path.c_str(), status);
fstream fpw(pw_path.c_str(), status);
fstream fnames(names_path.c_str(), status);
fstream funknown(unknown_path.c_str(), status);

//**************************************
//********* user struct ***************
//**************************************
struct user {
  string u_name{""};
  int password{};
  string name{""};
  string email{""};
  bool anonymous{};

  void sign_up();
};

void user::sign_up() {
  cout << "Enter user name. (No spaces): ";
  cin >> u_name;
  fnames << u_name;
  cout << "Enter Password: ";
  cin >> password;
  fpw << password;
  cout << "Enter name: ";
  cin >> name;
  cout << "Enter email: ";
  cin >> email;
  cout << "Allow anonymous: ";
  cin >> anonymous;
  funknown << anonymous;

}


//**************************************
//********* users struct ***************
//**************************************
struct users {

  vector<string> urs_name;
  vector<int> urs_pw;
  vector<bool> urs_type;

  void read_database();
  void login();
  void print_database();
};

void users::read_database() {
  string temp_name {""};
  string temp_pass{""};
  string temp_unknown{""};

  while (getline(fpw, temp_pass)) {
    getline(fnames, temp_name);
    getline(funknown, temp_unknown);
    urs_pw.push_back(stoi(temp_pass));
    urs_type.push_back(stoi(temp_unknown));
    urs_name.push_back(temp_name);
  }
}

void users::login() {
  int idx {-1};
  string in_name{""};
  int in_password{};
  cout << "Enter user name & password: ";
  cin >> in_name >> in_password;
  for (int i = 0; i < urs_name.size(); i++) {
    if(urs_name.at(i) == in_name) {
      idx = i;
      break;
    }
  }
  cout << urs_name.at(idx)  << " " << urs_pw.at(idx) << endl;
  if (urs_pw.at(idx) == in_password) {
    cout << "Welcome! " << urs_name.at(idx);
  }
}

void users::print_database() {
  for (int i = 0 ; i < urs_name.size(); i++) {
    cout << urs_name.at(i) << " " << urs_pw.at(i) << endl;
  }
}


//**************************************
//********* main ***********************
//**************************************

int main() {
  // users urs;
  // urs.read_database();
  // urs.login();
  // urs.print_database();
  user s;
  s.sign_up();
}

// int sign_up()
