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

// practice # 1:
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

// practice # 2:
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

// practice # 3:
// int main() {
//   vector<int> am = {1, 2, 3, 4};
//   vector<int> bm = {2, 2, 2, 4, 0};
//   vector<int> cm = {0, 3, 3, 5};
//   cout << max_sum(am, bm, cm) << endl;
// }

// practice # 4:
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

// practice # 5:
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
// void print_queue(queue<int> q) {

// problem # 1:
//   while (!q.empty()) {
//     cout << q.front() << " ";
//     q.pop();
//   }
//   cout << endl;
// }
// void reverse_queue(queue<int> &q) {
//   stack<int> st;
//  	while(!q.empty()) {
//     st.push(q.front());
//     q.pop();
//   }
//   while(!st.empty()) {
// 	q.push(st.top());
// 	st.pop();
//   }
// }
// int main() {
//   queue<int> q;
//   q.push(1);
//   q.push(2);
//   q.push(3);
//   print_queue(q);
//   reverse_queue(q);
//   print_queue(q);
// }

// problem # 2:

// problem # 3:
// struct OurStack {
//   queue<int> q;
//   int x;
//   void push(int val) {
//     q.push(val);
//     for (int i = 0; i < q.size() - 1; i++) {
//       x = q.front();
//       q.pop();
//       q.push(x);
//     }
//   }
//   void pop() {
//     if (!q.empty())
//       q.pop();
//   }
//   int top() { return q.front(); }
//   bool empty() { return q.empty(); }
// };
// int main() {
//   OurStack s;
//   s.push(1);
//   s.push(2);
//   s.push(3);
//   s.push(8);
//   while (!s.empty())
//     cout << s.top() << " ", s.pop();
//   cout << endl;
//   return 0;
// }