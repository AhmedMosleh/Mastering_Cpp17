//5_loops_medium.cpp
#include <iostream>
using namespace std;


// Problem #1: Print diamond
// Read an integer N, then print diamond of 2N rows as below
// int main() {
// 	//let's code
    
	
// }

// Problem #2: Special multiples 1
// Read an integer N : print all numbers that satisfy the following property
// Either number is divisible by 8 Or divisible by both 4 and 3
// int main() {
//     int N = 0;
//     cin >> N;
//     int i = 0;
//     while (i <= N) {
//         if(i%8 == 0 || (i%3 == 0 && i%4 == 0))
//             cout << i << " ";
//         i++;
//     }
//     cout << endl;
// }

// Problem #3: Special multiples 2
// Read an integer N (1 <= 30): Print the first N numbers that are
// multiple of 3 but not multiple of 4
// int main() {
    // int cnt = 0, i = 0;
    // int N = 0;
    // cin >> N;
    // while(cnt < N) {
    //     if(i%3 == 0 && !(i%4 == 0)) {
    //         cout << i << " ";
    //         cnt++;
    //     }
    //     i++;
    // }
//     int N;
//     cin >> N;
//     int i = 3;
//     while(N) {
//         if(i%4 != 0) {
//             --N;
//             cout << i << " ";
//         }
//         i += 3;
//     }
// }


// Problem #4: Minimum of values
// Input: Read integer T for a number of test cases.
// For each test case read integer N followed by reading N integers.
// Output: For each test case, print the minimum of the N integers.
// int main() {
//     int T;
//     cin >> T;
//     while(T--) {
//         int N;
//         cin >> N;
//         int min = 0xEFFFFFF;
//         while(N--) {
//             int num;
//             cin >> num;
//             if(num < min ){
//                 min = num;
//             }
//         }
//         cout << min << endl;

//     }
// }