// 12_stl_easy.cpp
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

// struct sum_k{
// 	int k;
// 	int sum {};
// 	queue<int> q;
// 	sum_k(int _k): k(_k) {

// 	}

// 	int next(int num) {
// 		q.push(num);
// 		sum += q.back();
// 		if(q.size() > (k+1)){
// 			sum -= q.front();
// 			q.pop();
// 		}

// 		return sum;
// 	}
// };

// int main() {
// 	//let's code
// 	sum_k pro(4);

// 	int num;
// 	while(cin >> num )
// 		cout << pro.next(num) << "\n";

// 	return 0;

// }

// int v_sum(vector<int> &x) {
//   vector<int>::iterator it = x.begin();
//   int sum{};
//   for (; it != x.end(); it++) {
//     sum += *it;
//   }
//   return sum;
// }

// int max_sum(vector<int> &a, vector<int> &b, vector<int> &c) {
//   int suma = v_sum(a);
//   int sumb = v_sum(b);
//   int sumc = v_sum(c);

//   //   cout << (!a.empty()) << (!b.empty()) << (!c.empty()) << endl;

//   while ((!a.empty()) && (!b.empty()) && (!c.empty())) {

//     if (suma == sumb && sumb == sumc) {
//       return suma;
//     }
//     int max_s = max(suma, max(sumb, sumc));

//     if (max_s == suma) {
//       suma -= a.back();
//       a.pop_back();
//     } else if (max_s == sumb) {
//       sumb -= b.back();
//       b.pop_back();
//     } else if (max_s == sumc) {
//       sumc -= c.back();
//       c.pop_back();
//     }
//   }
//   return -1;
// }

// int main() {
//   vector<int> am = {1, 2, 3, 4};
//   vector<int> bm = {2, 2, 2, 4, 0};
//   vector<int> cm = {0, 3, 3, 5};

//   cout << max_sum(am, bm, cm) << endl;
// }

// int main() {
//   string s;
//   cin >> s;
//   stack<char> vtr;

//   map<char, char> mp;
// 	mp[')'] = '(';
// 	mp['}'] = '{';
// 	mp[']'] = ']';
// 	string::iterator it = s.begin();
// 	for(char ch : s) {
// 		if(mp.count(ch)) { // colsed
// 			if(vtr.empty())
// 				return 0;
// 			else if(mp[ch] != vtr.top())
// 				return 0;
// 			vtr.push(ch);

// 		}
// 		else {
// 			vtr.push(ch);
// 		}

// 	}
// 	return vtr.empty();
// }

// int main() {
// 	freopen("test.txt", "rt", stdin);
//   int N{};
//   int k{};
//   int cnt{};
//   string name{""};
//   string fname{""};
//   vector<string> vtrname;
//   map<string, vector<string>> mp;

// //   cout << "number of triels: ";
//   cin >> N;

//   for (int j = 0; j < N;j++) {
// 	// cout << "trial: " << j << endl;
// 	// cout << "enter num of names: ";
// 	cin >> k;
// 	fname = "";
//     for (int i = 0; i < k; i++) {
// 	//   cout << "name # " << i << " "; 
//       cin >> name;
// 	  if(i)
// 	  	fname += " ";
// 	fname += name;
//       vtrname.push_back(fname);
//     }
// 	// for(auto n : vtrname) {cout << n << " ";};
// 	// cout << endl;
// 	for (int i = 0; i < k; i++) {
// 		mp[vtrname.at(i)].push_back(fname);
// 	}
// 	vtrname.clear();
//   }

//   int q{};
//   cin >> q;
//   while (q--) {
// 	cin >> k;
// 	fname = "";
// 	for (int i = 0; i < k; i++) {
// 		cin >> name;
// 		if(i != 0)
// 			fname += " ";
// 		fname += name;
// 	}
// 	// cout << fname << endl;
// 	for (auto str : mp[fname]) {
// 		cout << str << endl;
// 	}
// 	cout << endl;
//   }
// }

// int main() {

// }