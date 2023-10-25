#include <filesystem>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

#define MAX_USER 10

auto status = ios::in | ios::out | ios::app;
string fmeta_path = "./q/q_meta_data.txt";
fstream fmeta(fmeta_path.c_str(), status);

bool loged_in{0};
int my_id{-1};

//**************************************
//********* user struct ***************
//**************************************
struct user {
  string u_name{""};
  int password{};
  string name{""};
  string email{""};
  bool anonymous{0};
  int u_id{};

  void read_data();
};

void user::read_data() {
  cout << "Enter user name. (No spaces): ";
  cin >> u_name;
  cout << "Enter user ID: ";
  cin >> u_id;
  cout << "Enter Password: ";
  cin >> password;
  // cout << "Enter name: ";
  // cin >> name;
  // cout << "Enter email: ";
  // cin >> email;
  cout << "Allow anonymous: ";
  cin >> anonymous;
}

//**************************************
//********* ask_fm struct ***************
//**************************************
struct ask_fm {
  // user users[MAX_USER];
  user temp;
  void main_menu();
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

  // helper functions:
  bool is_user_exist();
  bool is_q_exist();
  bool
  is_user_aq(); // this function checks if the user accepts anonymous questions?
};

void ask_fm::main_menu() {
  int opt{};
  do {
    cout << "Menu:\n\t1: Login\n\t2: Sign Up\n";
    cin >> opt;
  } while (opt != 1 && opt != 2);

  if (opt == 2) {
    sign_up();
  } else if (opt == 1) {
    login();
  }

  cout << "Menu:\n\t"
       << "1: Print Questions To Me\n\t"
       << "2: Print Questions From Me\n\t"
       << "3: Answer Question\n\t"
       << "4: Delete Question\n\t"
       << "5: Ask Question\n\t"
       << "6: List System Users\n\t"
       << "7: Feed\n\t"
       << "8: Logout\n";
  while (1) {
    do {
      cout << "Enter number in range 1 - 8:";
      cin >> opt;
    } while (!(1 <= opt && opt <= 8));

    switch (opt) {
    case 1:
      print_q_to_me();
      break;
    case 2:
      print_q_from_me();
      break;
    case 3:
      answer_q();
      break;
    case 4:
      delete_q();
      break;
    case 5:
      ask_q();
      break;
    case 6:
      list_users();
      break;
    case 7:
      feed();
      break;
    case 8:
      cout << "GOOD BEYE!" << endl;
      return;
      break;
    }
  }
}

void ask_fm::login() {
  // 1. read user name and password:
  string in_name{""};
  int pw{};
  cout << "Enter user name & password: ";
  cin >> in_name >> pw;

  // 2. check if there is a file with the user name
  ifstream fin("./u/" + in_name);
  if (fin.fail()) {
    cout << "No user with this name. please try again\n";
    return;
  }
  // @TODO: return to main menu if the file doesn't exist.

  // 3. if there is a file name then read the passward and compare:
  int pw_cmp{};
  int u_id{-1};
  bool aq{};
  fin >> pw_cmp;  // read password.
  fin >> aq;      // the user accept anonymous questions or not.
  fin >> u_id;    // user id.
  if (pw == pw_cmp) {
    my_id = u_id;
    cout << "Your're welcome!\n";
    loged_in = true;
  }
  // @TODO: return to main menu if the password is wrong.
  fin.close();
}

void ask_fm::sign_up() {
  // 1. read user name and password:
  temp.read_data();
  // 2. create file for this user with this format: password\nanonymous\nuserid.
  ofstream fout("./u/" + temp.u_name);
  fout << temp.password << endl;
  fout << temp.anonymous << endl;
  fout << temp.u_id << endl;
  fout.close();
}

void ask_fm::print_q_to_me() {}
void ask_fm::print_q_from_me() {}

void ask_fm::answer_q() {}
void ask_fm::delete_q() {}

void ask_fm::ask_q() {
  int to_id{};
  cout << "Enter User id or -1 to cancel: ";
  cin >> to_id;
  if (to_id == -1) {
    return;
  }
  // 1. check if the user exist:
  bool is_exist = is_user_exist();
  if (!is_exist) {
    cout << "the user id isn't correct\n";
    return;
  }

  // TODO:
  // 2. if the user exist, check if he accept anonymous q?
  bool is_aq = is_user_aq();
  if (is_aq) {
    cout << "Note: Anonymous questions are not allowed for this user\n";
    
  }

  // 3. thread q:
  int q_id{};
  cout << "For thread Question: Enter Question id or -1 for new question: ";
  cin >> q_id;

  // TODO:
  // 4. if it is thread question, check if the question exist:
  if (q_id != -1) {
    bool is_q = is_q_exist();
  }

  // 5. if the q isn't thread, read the q (and q id for first version)
  string q{""};
  cin.ignore();
  getline(cin, q);
  cin >> q_id;

  // 6. save the question in a new file with this formate
  // send-from-id_send-to-id_question-id, Ex: 55_11_101 then :
  // 55  => user how sends the q.
  // 11  => user how recives the q.
  // 101 => the q id
  cout << "./q/"+to_string(my_id)+"_"+to_string(to_id)+"_"+to_string(q_id) << endl;
  ofstream fout("./q/"+to_string(my_id)+"_"+to_string(to_id)+"_"+to_string(q_id));
  fout << "Q: " << q << endl;
  fout.close();
  // 7. save the meta data in this file q_meta_data.txt
  fmeta << q_id << " " << my_id << " " << to_id << endl;
}
void ask_fm::list_users() {}
void ask_fm::feed() {}

bool ask_fm::is_user_exist() { return 1; }
bool ask_fm::is_q_exist() { return 1; }
bool ask_fm::is_user_aq() { return 1; }
//**************************************
//********* main ***********************
//**************************************

int main() {
  ask_fm sys;
  sys.main_menu();
}

// int sign_up()
