
#include<iostream>
using namespace std;

int main() {

    int a, b;

    while ((cin >> a >> b) && !(a == 0 && b == 0)) {
        //�߼���ʹ�ã�����λȡ����~
        int result = a + b;
        cout << result << endl;
    }

    return 0;
}