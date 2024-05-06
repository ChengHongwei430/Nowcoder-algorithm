
#include<iostream>
#include<string>

using namespace std;

void change(char& a, char& b) {
    char t;
    t = a;
    a = b;
    b = t;
}

int main() {

    string s;
    int n;
    while (cin >> n) {
        getchar();//忽略第一行的回车键
        for (int j = 0; j < n; ++j) {
            getline(cin, s);
            for (int i = 0; i < s.size() - 1; i += 2) {
                //change(s[i],s[i+1]);
                //cout<<s[i]<<s[i+1];
                cout << s[i + 1] << s[i];
            }
            cout << endl;
        }

    }

}