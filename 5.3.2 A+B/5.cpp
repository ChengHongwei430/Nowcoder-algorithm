
#include<iostream>
using namespace std;

int main() {

    int N, M, x;

    while (cin >> N) {

        for (int i = 0; i < N; ++i) {

            int result = 0;
            cin >> M;

            for (int j = 0; j < M; ++j) {
                cin >> x;
                result += x;
            }

            cout << result << endl;//在运算结束后才输出
            if (i < N - 1) cout << endl;

        }


    }
}