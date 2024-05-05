
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    while (cin >> n) {

        if (n <= 1) {
            for (int i = 0; i < n; ++i) cout << "*";
            cout << endl;
            break;
        }//考虑变成为1的情况

        for (int i = 0; i < n; ++i) cout << "*";
        cout << endl;

        for (int i = 0; i < n - 2; ++i) {
            for (int j = 0; j < n; ++j) {
                if (j == 0 || j == n - 1) cout << "*";
                else cout << " ";
            }
            cout << endl;
        }

        for (int i = 0; i < n; ++i) cout << "*";
        cout << endl;

    }
}