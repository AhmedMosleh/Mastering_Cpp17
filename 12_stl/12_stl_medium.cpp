// 12_stl_medium.cpp
#include <cstdio>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

// int  reverse_num (int num) {
// 	stack<int> st;
// 	while(num) {
// 		st.push(num%10);
// 		num /= 10;
// 	}
// 	int tens = 1;
// 	while (!st.empty()) {
// 		num += st.top() * tens;
// 		st.pop();
// 		tens *= 10;
// 	}
// 	return num;
// }
// // problem 3:
// int main() {
// 	//let's code
// 	cout << reverse_num(12893) << endl;
// }

// problem 4:
// int main() {
// 	freopen("test2.txt", "rt", stdin);
// 	int N;
// 	cin >> N;
// 	string str;
// 	map<string, vector<string>> mp;
// 	vector<string> vtr;
// 	while(N--) {
// 		cin >> str;
// 		vtr.push_back(str);
// 	}
// 	for(string s : vtr) { cout << s << " ";}
// 	cout << endl;
// 	for (string s : vtr) {
// 		string name = "";
// 		for(int i = 0; i < s.size(); i++) {
// 			name += s.at(i);
// 			mp[name].push_back(s);
// 		}
// 	}
// 	int q;
// 	cin >> q;
// 	while(q--) {
// 		cin >> str;
// 		for(string s : mp[str])
// 			cout << s << " ";
// 		cout << endl;
// 	}
// }

// problem 5:
// int main() {
// 		freopen("test2.txt", "rt", stdin);
// 	int N;
// 	cin >> N;
// 	map<string,set<string>> mp;
// 	while(N--) {
// 		string name;
// 		cin >> name;
// 		string fname = "";
// 		for (int i = 0; i < name.size(); i++) {
// 			fname += name.at(i);
// 			mp[fname].insert(name);
// 		}
// 	}
// 	cin >> N;
// 	while(N--) {
// 		string sub;
// 		cin >> sub;
// 		for (string s : mp[sub]) {
// 			cout << s << " ";
// 		}
// 		cout << endl;
// 	}
// }

// Homework 6: Remove All Adjacent Duplicates In String
// string removeDuplicates(string s) {
//   vector<char> chr;
//   int size_s = s.size();
//   int j = 1;
//   chr.push_back(s.at(0));
//   for (int i = 1; i < size_s; i++) {
//     if (s.at(j) == chr.back()) {
//       s.erase(j - 1, 2);
//       chr.pop_back();
//       j -= 1;
//     } else {
//       chr.push_back(s.at(j));
//       j++;
//     }
//   }
//   return s;
// }
// int main() { cout << removeDuplicates("azxxzy") << endl; }

// Homework 7: Score of Parentheses
// int scoreOfParentheses(string s) {
//   stack<char> chr;

//   int cnt{};
//   for (int i = 0; i < s.size(); i++) {
//     cout << s.at(i) << endl;
//     if (s.at(i) != '(' && s.at(i) != ')') {
//       return 0;
//     }
//     if (!chr.empty()) {
//       if (s.at(i) == '(' && chr.top()) {
//         chr.push(s.at(i));
//       } else if (s.at(i) == ')' && chr.top() == '(') {
//         cnt++;
//         chr.pop();
//       }
//     }
//   	else if (s.at(i) == '(') {
//     chr.push(s.at(i));
//   }
// }
// return cnt;
// }
// int main() { cout << scoreOfParentheses("(())()") << endl; }

// test1:
int main() {

  string str{"   fly me   to   the moon  "};
  int idx = -1;
  int cnt{};
  int start{};
  for (int i = str.size() - 1; i >= 0; i--) {
    if (str.at(i) != ' ') {
      start = i;
      break;
    }
  }
//   cout << start << endl;
  for (int i = start; i >= 0; i--) {
    if (str.at(i) == ' ') {
      break;
    }

    cnt++;
  }
	// cout << cnt << endl;
  return cnt;
}