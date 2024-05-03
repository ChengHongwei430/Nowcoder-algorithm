
#include<iostream>
#include<vector>

using namespace std;
using std::vector;

int main() {
    int n;
    while (cin >> n && n != 0) {

        vector<int> num;//此时数组长度为0，其中无元素
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

        if (cin.get() == 0) break;//最后一行是没有换行符号的
    }
}