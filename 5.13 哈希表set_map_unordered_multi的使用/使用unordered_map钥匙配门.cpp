

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
            mymap[x] = y;//����,��Ҫʹ��insert̫�鷳
            //mymap.insert(make_pair(x,y));
            //Ҫ��ʹ��insert���map�ͱ���Ҫmake_pair()����
            //ɾ������ֵ
            //mymap.erase(x);
        }

        cin >> z;
        bool flag = false;
        for (const pair<double, double>& kv : mymap) {
            //const ��ʾֻ��ȡ������Ԫ�ز��ı�
            if (kv.second == z) {
                cout << kv.first << endl;
                flag = true;
                break;
            }
        }
        if (!flag) cout << "Can't open the door." << endl;

    }

}