

#include<iostream>
#include<unordered_map>
using namespace std;

int main() {

    unordered_map<double, double> mymap;
    int k, n;
    double x, y, z;
    cin >> k;
    while (k--) {

        mymap.clear();
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> x >> y;
            mymap[x] = y;//插入,不要使用insert太麻烦
            //mymap.insert(make_pair(x,y));
            //要是使用insert添加map就必须要make_pair()函数
            //删除靠键值
            //mymap.erase(x);
        }

        cin >> z;
        bool flag = false;
        for (const pair<double, double>& kv : mymap) {
            //const 表示只读取容器的元素不改变
            if (kv.second == z) {
                cout << kv.first << endl;
                flag = true;
                break;
            }
        }
        if (!flag) cout << "Can't open the door." << endl;

    }

}