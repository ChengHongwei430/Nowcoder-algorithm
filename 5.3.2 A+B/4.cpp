




#include<iostream>
using namespace std;

int main() {

    int n, x;//��������Ĳ�����������ǰ��������

    while (cin >> n && n != 0) {

        int result = 0;

        for (int i = 0; i < n; ++i) {
            cin >> x;
            //result = result + x;//����ʹ�ø��������
            result += x;
        }

        cout << result << endl;

    }

}