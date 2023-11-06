// 1_printing_easy.cpp
#include <iostream>
using namespace std;

class Solution {
public:
  bool repeatedSubstringPattern(string s) {
    for (int i = 0; i < s.size(); i++) {
      string cmp = s.substr(0, i + 1);
      int len = cmp.size();
      int cnt = 0;
    //   cout << cmp << " " << s.substr(0, i + 1) <<endl;
      if (s.size() % len == 0 && len != s.size()) {
		cnt++;
        for (int j = 0; j < s.size() / cmp.size() - 1; j++) {
        //   cout << cmp << " " << s.substr((j+1) * len, len) << endl;

          if (s.substr((j+1) * len, len) == cmp) {
            cnt++;
          }
          // cout << cmp << " " << s.substr(j+len,len) << " " << flag << endl;
        }
      } else {
			int flag = 0;
      }
	//   cout << cnt << " " << s.size() / cmp.size() << endl;
      if (cnt == s.size() / cmp.size())
        return 1;
    }
    return 0;
  }
};

int main() {
  // let's code

  Solution s;

  cout << s.repeatedSubstringPattern("abcabcabcabcd") << endl;
}