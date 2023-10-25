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
  // @TODO: Generate ID.
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
  // this function checks if the user accepts anonymous questions?
  bool is_user_aq(); 
};

void ask_fm::main_menu() {
  // Select options: 1. login 2. sign up
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


  // Select options from 1 to 8:
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

// 1:
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

// 2:
void ask_fm::sign_up() {
  // 1. read user name and password:
  temp.read_data();
  // 2. create file for this user with this format: password\nanonymous\nuserid.
  ofstream fout("./u/" + temp.u_name);
  fout << temp.password << endl;
  fout << temp.anonymous << endl;
  fout << temp.u_id << endl;
  fout.close();

  // 3. update my id 
  my_id = temp.u_id;
}


// 1:
void ask_fm::print_q_to_me() {}

// 2:
void ask_fm::print_q_from_me() {}

// 3:
void ask_fm::answer_q() {
  // 1. take the question id from the user:
  int q_id {};
  cout << "Enter Question id or -1 to cancel: ";
  cin >> q_id;
  if(q_id == -1) {
    return;
  }

  // 2. check this q id from q_meta data file:
  string line;
  int q_from {}; // quetion from who?
  int q_to {}; // quetion to who?
  int check_q_id {}; // to check quetion id;

  fstream fmeta(fmeta_path.c_str(), status);
  fmeta.seekg(0); // Reset the file pointer to the beginning of the file
  while(getline(fmeta,line)) {
    cout << endl << line << "\n\n";
    istringstream iss(line);
    iss >> check_q_id >> q_from >> q_to;
    if(q_id == check_q_id)
    {
      iss.clear();
      break;
    } 
  }

  // 3. check if this q to me:
  cout << endl << q_to << " " << my_id << "\n\n";
  if(q_to != my_id){
    cout << "This Question didn't send to you\n";
    return;
  }
  else {
    cout << "Question ID (" << q_id << ") from user id (" << q_from << "):\n"; 
  }

  // 4. open the file and read q and answer if there:
  string fh_path = "./q/"+to_string(q_from)+"_"+to_string(q_to)+"_"+to_string(q_id);
  cout << fh_path << endl;
  fstream fh(fh_path,status);

  // 5. read the q and answer if there: 
  string question, answer;
  getline(fh,question);
  getline(fh,answer);
  cout << question << endl << answer << endl;

  fmeta.close();
}

// 4:
void ask_fm::delete_q() {}

// 5:
void ask_fm::ask_q() {

  // select which user you need to ask.
  int to_id{};
  cout << "Enter User id or -1 to cancel: ";
  cin >> to_id;
  if (to_id == -1) {
    return;
  }

  // check if the user exist:
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

  // 3. thread q or not:
  int q_id{};
  cout << "For thread Question: Enter Question id or -1 for new question: ";
  cin >> q_id;

  // TODO:
  // 4. if it is thread question, check if the question exist:
  if (q_id != -1) {
    bool is_q = is_q_exist();
  }

  // 5. if the q isn't thread, read the q (and q id for first version)
  // TODO: the q id will be self generated by the code.
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
  fstream fmeta(fmeta_path.c_str(), status);
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
