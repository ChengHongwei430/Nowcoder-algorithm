
//�������飬ÿ��ֵ���ÿո���������ÿ�������е�ż��֮��

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
    }//���һ��֮����û�л��з��ŵ�
    cout << sum << endl;
    cout << endl;
    num.clear();
    sum = 0;

}