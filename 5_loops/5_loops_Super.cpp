// 5_loops_Super.cpp
#include <iostream>
#include <ratio>
using namespace std;

// // Problem #1: Find NOs
// int main() {
// 	//let's code
// 	int N;
// 	cin >> N;
// 	while (N--) {
// 		string str = " ";
// 		cin >> str;
// 		if (str == "no" || str == "No" || str == "nO" || str == "NO" ||
// 			str == "on" || str == "oN" || str == "On" || str ==
// "ON") 			cout<<str<<" ";
// 	}
// }

// // Problem #2: Reverse number
// int main() {
// 	int num;
// 	int rnum = 0;
// 	cin >> num;
// 	while (num) {
// 		rnum *= 10;
// 		rnum += num%10;
// 		num /= 10;
// 	}
// 	cout << rnum << " " << rnum * 3 << endl;
// }

// Problem #3: Multiplication table
// int main() {
// 	int N, M;
// 	cin >> N >> M;
// 	int n = 1;
// 	while(n <= N){
// 		int m = 1;
// 		while(m <= M) {
// 			cout << n << " x " << m << " = " << n*m << endl;
// 			m++;
// 		}
// 		n++;
// 	}
// }

// Problem #4: Special Sum
// int main() {
// 	int T;
// 	cin >> T;
// 	while (T--) {
// 		int N;
// 		cin >> N;
// 		int cnt = 0;
// 		int sum = 0;
// 		// compute sum
// 		while(N--) {
// 			int num;
// 			cin >> num;
// 			int mul = 1;
// 			cnt++;
// 			int start = 1;
// 			// compute mul
// 			while(start <= cnt) {
// 				mul *= num;
// 				start++;
// 			}
// 			sum += mul;
// 		}
// 		cout << sum << endl;
// 	}
// }

// for loop
// Homework 1: Printing X
// Read an Integer N, then print an X using * as following
// int main() {
//     int N;
//     cin >> N ;
//     for (int i = 1; i <= N; i++) {
//         for (int j = 1; j <= N; j++) {
//             if(i == j )
//                 cout <<'*';
//             else if(i+j == N+1)
//                 cout <<'*';
//             else
//                 cout <<' ';
//         }
//         cout << endl;
//     }
// }

// Homework 2: Find Special Pairs
// Count How many X, Y numbers such that
// X in range [50-300]
// Y in range [70-400]
// X<Y
// (X+Y) divisible by 7
// int main() {
//     int cnt = 0;
//     int start = 0;
//     int j = 0;
//     for (int i = 50; i <=300; i++) {
//         start = 70;
//         if (start < i+1) start = i+1;
//         for (j = start; j <= 400; j++) {
//             if((i+j)%7 == 0) cnt++;
//         }
//     }
//     cout << cnt << endl;
// }

// Homework 3: Find all quadruples
// Count how many (a, b, c, d) with following property:
// Code it once using 4 loops
// 1 <= a, b, c, d <= 200
// a+b=c+d
// int main() {
//   int cnt{0};
//   for (int a = 1; a <= 200; a++) {
//     for (int b = 1; b <= 200; b++) {
//       for (int c = 1; c <= 200; c++) {
//         int d = a + b - c;
//         if (1 <= d && d <= 200)
//           cnt++;
//       }
//     }
//   }
//   cout << cnt << endl;
// }
