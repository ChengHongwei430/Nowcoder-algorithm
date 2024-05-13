
#include<iostream>
#include<set>
#include<unordered_set>

using namespace std;

int main() {

    unordered_set<int> myset;
    //集合不能设置在外面,
    //要设置在外面就要在每轮使用前清空

    int k;
    cin >> k;

    while (k--) {

        myset.clear();//清空之前的数据

        int m, x;
        cin >> m;
        for (int i = 0; i < m; ++i) {
            cin >> x;
            myset.insert(x);
        }

        cin >> x;//输入要查询的数字
        if (myset.find(x) != myset.end()) cout << "YES" << endl;
        else cout << "NO" << endl;

    }

}