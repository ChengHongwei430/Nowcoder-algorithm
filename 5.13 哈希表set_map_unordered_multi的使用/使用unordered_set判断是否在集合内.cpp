
#include<iostream>
#include<set>
#include<unordered_set>

using namespace std;

int main() {

    unordered_set<int> myset;
    //���ϲ�������������,
    //Ҫ�����������Ҫ��ÿ��ʹ��ǰ���

    int k;
    cin >> k;

    while (k--) {

        myset.clear();//���֮ǰ������

        int m, x;
        cin >> m;
        for (int i = 0; i < m; ++i) {
            cin >> x;
            myset.insert(x);
        }

        cin >> x;//����Ҫ��ѯ������
        if (myset.find(x) != myset.end()) cout << "YES" << endl;
        else cout << "NO" << endl;

    }

}