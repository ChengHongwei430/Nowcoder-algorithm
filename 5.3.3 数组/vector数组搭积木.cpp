
#include<iostream>
#include<vector>

using namespace std;
using std::vector;

int main() {
    int n;
    while (cin >> n && n != 0) {

        vector<int> num;//��ʱ���鳤��Ϊ0��������Ԫ��
        int sum = 0, x;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            num.push_back(x);
            sum += x;
        }

        int count = 0;
        for (int i = 0; i < num.size(); ++i) {
            if (num[i] > sum / num.size()) count += num[i] - sum / num.size();
        }
        cout << count << endl;
        cout << endl;

        if (cin.get() == 0) break;//���һ����û�л��з��ŵ�
    }
}