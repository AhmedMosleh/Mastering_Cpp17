//5_loops_easy.cpp
#include <iostream>
using namespace std;

// practice 1
// int main() {
// 	//let's code
// 	int end;
// 	cin >> end;
// 	int start = 1;
// 	while(start <= end) {
// 		if(start%3 == 0) {
// 			cout << start << "\n";
// 		}
// 		++start;
// 	}
// }

// practice 2
// int main() {
// 	//let's code
// 	int x,y;
// 	int pow = 1;
// 	cin >> x >> y;
// 	while(y > 0) {
// 		pow *= x;
// 		--y;
// 	}
// 	cout << pow << endl;
// }

// practice 3
// int main() {
// 	//let's code
// 	int num;
// 	cin >> num;
// 	int res = 0;
// 	if(num == 0)
// 	{
// 		cout << 1 << endl;
// 		return 0;
// 	}
// 	while(num) {
// 		++res;
// 		num /= 10;
// 	}
// 	cout << res << endl;
// }

// practice 4
// int main() {
// 	int T;
// 	cin >> T;
// 	while(T--) {
// 		int num;
// 		cin >> num;
// 	}
// }

// Problem #3: Print left angled triangle
// Read integer N, then print a left angled triangle that has N rows as below:
// int main() {
// 	int col;
// 	cin >> col;
// 	int row = 1;
// 	while(row <= col) {
// 		int start = 1;
// 		while(start <= row) {
// 			cout << '*';
// 			start++;
// 		}
// 		row++;
// 		cout << endl;
// 	}
// }


// Problem 4#: Print face down left angled triangle
// Read integer N, then print a face down left angled triangle that has N rows.
// int main() {
// 	int col;
// 	cin >> col;
// 	int row = col;
// 	while(row > 0) {
// 		int start = row;
// 		while(start > 0) {
// 			cout << '*';
// 			start--;
// 		}
// 		row--;
// 		cout << endl;
// 	}
// }


// Problem #5: Special Average
// Read integer N, followed by reading N numbers. Print 2 values
// The average of the numbers in odd positions (1st, 3rd, 5th, …)
// The average of the numbers in even positions (2nd, 4th, 6th, …)
// int main() {
// 	int N;
// 	cin >> N;
// 	int e_num = N/2;
// 	int o_num = N - e_num;
// 	int e_sum = 0, o_sum = 0;
// 	int start = 1;
// 	while(start <= N) {
// 		int num;
// 		cin >> num;
// 		if(start%2) {o_sum += num;}
// 		else {e_sum += num;}
// 		start++;
// 	}
// 	cout << e_sum/e_num << " " << o_sum/o_num;
// }

