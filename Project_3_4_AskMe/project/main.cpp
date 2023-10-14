#include <filesystem>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

#define MAX_USER 10

auto status = ios::in | ios::out | ios::app;
string q_ids_path = "./q/q_ids.txt";
fstream q_ids_file(q_ids_path.c_str(), status);

bool loged_in{0};
int my_id{55};

//**************************************
//********* user struct ***************
//**************************************
struct user {
  string u_name{""};
  int password{};
  string name{""};
  string email{""};
  bool anonymous{0};

  void read_data();
};

void user::read_data() {
  cout << "Enter user name. (No spaces): ";
  cin >> u_name;
  cout << "Enter Password: ";
  cin >> password;
  cout << "Enter name: ";
  cin >> name;
  cout << "Enter email: ";
  cin >> email;
  cout << "Allow anonymous: ";
  cin >> anonymous;
}

//**************************************
//********* ask_fm struct ***************
//**************************************
struct ask_fm {
  // user users[MAX_USER];
  user temp;
  void login();
  void sign_up();
  void print_q_to_me();
  void print_q_from_me();
  void answer_q();
  void delete_q();
  void ask_q();
  void list_users();
  void feed();
  void logout();
};

void ask_fm::login() {
  string in_name{""};
  int pw{};
  cout << "Enter user name & password: ";
  cin >> in_name >> pw;
  ifstream fin("./u/" + in_name);
  if (fin.fail()) {
    cout << "Can't open the file\n";
    return;
  }
  int pw_cmp{};
  fin >> pw_cmp;
  if (pw == pw_cmp) {
    cout << "Your're welcome!\n";
    loged_in = true;
  }
  cout << loged_in << endl;
  fin.close();
}

void ask_fm::sign_up() {
  temp.read_data();
  ofstream fout("./u/" + temp.u_name);
  fout << temp.password << endl;
  fout << temp.anonymous << endl;
  fout.close();
}
void ask_fm::print_q_to_me() {}
void ask_fm::print_q_from_me() {}
void ask_fm::answer_q() {}
void ask_fm::delete_q() {}

// The issue with your code is that after reading an integer for u_id, there is
// a newline character left in the input buffer. When you subsequently call
// getline to read the string q, it immediately reads the remaining newline
// character and doesn't allow you to input the string.
void ask_fm::ask_q() {
  int u_id{};
  cout << "Enter User id or -1 to cancel: ";
  cin >> u_id;
  if (u_id == -1) {
    return;
  }
  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  string q;
  cout << "Enter you Q: ";
  getline(cin, q);

  // generate a question id:
  int q_id{};
  string id_temp;

  q_ids_file.seekg(0, ios::end);
  streampos fileSize = q_ids_file.tellg();
  if (fileSize == 0) {
    q_id = 101;
  } else {
    while (getline(q_ids_file, id_temp)) {
      cout << id_temp << endl;
      q_id = stoi(id_temp);
    }
    q_id++;
  }
  q_ids_file << q_id << endl;
  cout << q_id << endl;


  ofstream fout("./q/" + to_string(q_id) + "_" + to_string(my_id) + "_" +
                to_string(u_id));
  fout << "Q: " << q;
}
void ask_fm::list_users() {}
void ask_fm::feed() {}
void ask_fm::logout() {}
//**************************************
//********* main ***********************
//**************************************

int main() {
  ask_fm sys;
  sys.ask_q();
  sys.ask_q();
  sys.ask_q();


  // sys.sign_up();
  // sys.login();
  // while(1);
  // string s;
  // getline(cin, s);
  // cout << s;
}

// int sign_up()
