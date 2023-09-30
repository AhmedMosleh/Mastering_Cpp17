//4_selection_medium.cpp
#include <iostream>
using namespace std;

// p1 
// int main() {
// 	//let's code
// 	int n1,max;
// 	cin >> max;
// 	cin >> n1;	if(n1 > max) { max = n1; } 	
// 	cin >> n1;	if(n1 > max) { max = n1; } 	
// 	cin >> n1;	if(n1 > max) { max = n1; } 	
// 	cin >> n1;	if(n1 > max) { max = n1; } 	
// 	cin >> n1;	if(n1 > max) { max = n1; } 	
// 	cin >> n1;	if(n1 > max) { max = n1; } 	
// 	cin >> n1;	if(n1 > max) { max = n1; } 	
// 	cin >> n1;	if(n1 > max) { max = n1; } 	
// 	cin >> n1;	if(n1 > max) { max = n1; } 	
// 	cout << endl << max << endl;
// 	return 0;
// }

// p2
// int main() {
// 	//let's code
// 	int n1 , cnt,max;
// 	cin >>  cnt >> max >> n1;
// 	--cnt;
// 	if(n1 > max && cnt) { max = n1; } 	cin >> n1, --cnt;
// 	if(n1 > max && cnt) { max = n1; } 	cin >> n1, --cnt;
// 	if(n1 > max && cnt) { max = n1; } 	cin >> n1, --cnt;
// 	if(n1 > max && cnt) { max = n1; } 	cin >> n1, --cnt;
// 	if(n1 > max && cnt) { max = n1; } 	cin >> n1, --cnt;
// 	if(n1 > max && cnt) { max = n1; } 	cin >> n1, --cnt;
// 	if(n1 > max && cnt) { max = n1; } 	cin >> n1, --cnt;
// 	if(n1 > max && cnt) { max = n1; } 	cin >> n1, --cnt;
// 	cout << endl << max;
// }

//p1
// int main() {
// 	int a,b;
// 	cin >> a >> b;
// 	bool a_even = !(a%2);
// 	bool b_even = !(b%2);
// 	if(a_even && b_even) 		{ cout << a/b << endl;}
// 	else if(!a_even && !b_even) { cout << a*b << endl;}
// 	else if(!a_even && b_even) 	{ cout << a+b << endl;}
// 	else if(a_even && !b_even) 	{ cout << a-b << endl;}
// 	return 0;
// }

//p2
// int main() {
// 	int n1,n2,n3;
// 	int temp;
// 	cin >> n1 >> n2 >> n3;
// 	if(n1 > n3) {temp = n1; n1 = n3; n3 = temp;}
// 	if(n1 > n2) {temp = n1; n1 = n2; n2 = temp;}
// 	if(n2 > n3) {temp = n2; n2 = n3; n3 = temp;}
// 	// if(n1 > n2) {temp = n1; n1 = n2; n2 = temp;}
// 	cout << n1 << n2 << n3;
// }

//p3
// int main() {
// 	int n1,n2,n3;
// 	cin >> n1 >> n2 >> n3;
// 	int max = -1;
// 	if(n1 < 100 && n1 > max) { max = n1;}
// 	if(n2 < 100 && n2 > max) { max = n2;}
// 	if(n3 < 100 && n3 > max) { max = n3;}
// 	cout << max;
// }

//p4
// int main() {
// 	int X,n1,cnt = 0;
// 	cin >> X;
// 	cin >> n1; if(n1 <= X) cnt++;
// 	cin >> n1; if(n1 <= X) cnt++;
// 	cin >> n1; if(n1 <= X) cnt++;
// 	cin >> n1; if(n1 <= X) cnt++;
// 	cin >> n1; if(n1 <= X) cnt++;
// 	cout << cnt << " " << 5 - cnt << endl;
// }