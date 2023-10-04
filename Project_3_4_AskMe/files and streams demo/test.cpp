#include <iostream>
#include <fstream>
using namespace std;


// int main() {
//     freopen("in.txt","rt",stdin);
//     freopen("out.txt","wt",stdout);

//     int x;
//     cin >> x;

//     cout << x << endl;

// }


int main() {
    fstream fin1("in.txt");

    if(fin1.fail()) {
        cout << "can't open" << endl;
        return 0;
    }

    int x,y,z;
    fin1 >> x >> y >> z;

    cout << x*y*z;

    fin1.close();


}