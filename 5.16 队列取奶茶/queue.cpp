
#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main() {

    int n, x;
    string s;
    queue<string> q;

    cin >> n;
    while (n--) {
        cin >> s;
        q.push(s);
    }

    cin >> n;
    while (n--) {
        cin >> x;
        if (x == 1) {
            if (!q.empty()) q.pop();
        }
        else {
            cin >> s;
            q.push(s);
        }
    }
    if (!q.empty()) cout << q.front() << endl;
    else cout << "There are no more people in the queue." << endl;


}