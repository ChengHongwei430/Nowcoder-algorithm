




#include<iostream>
using namespace std;

int main() {

    int n, x;//对于输入的参数，必须提前定义类型

    while (cin >> n && n != 0) {

        int result = 0;

        for (int i = 0; i < n; ++i) {
            cin >> x;
            //result = result + x;//优先使用复合运算符
            result += x;
        }

        cout << result << endl;

    }

}