
//多行数组，每个值采用空格隔开，输出每行数组中的偶数之和

#include<iostream>
#include<vector>
using namespace std;
using std::vector;

int main() {

    vector<int> num;

    int x;
    int sum = 0;

    while (cin >> x) {
        num.push_back(x);
        if (x % 2 == 0) sum += x;
        if (cin.get() == '\n') {
            cout << sum << endl;
            cout << endl;
            num.clear();
            sum = 0;
        }
    }//最后一行之后是没有换行符号的
    cout << sum << endl;
    cout << endl;
    num.clear();
    sum = 0;

}