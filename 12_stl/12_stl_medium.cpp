//12_stl_medium.cpp
#include <cstdio>
#include <iostream>
#include <map>
#include <queue>
#include <set>
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


int main() {
	freopen("test2.txt", "rt", stdin);
	int N;
	cin >> N;
	string str;
	map<string, vector<string>> mp;
	vector<string> vtr;

	while(N--) {
		cin >> str;
		vtr.push_back(str);
	}
	for(string s : vtr) { cout << s << " ";}
	cout << endl;
	for (string s : vtr) {
		string name = "";
		for(int i = 0; i < s.size(); i++) {
			name += s.at(i);
			mp[name].push_back(s);
			cout << name << " ";
		}
		cout << endl;
	}

	int q;
	cin >> q;
	while(q--) {
		cin >> str;
		for(string s : mp[str])
			cout << s << " ";
		cout << endl;
	}
}