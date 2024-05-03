
#include<iostream>
using namespace std;

int main() {

    int a, b;

    while ((cin >> a >> b) && !(a == 0 && b == 0)) {
        //逻辑非使用！，按位取反是~
        int result = a + b;
        cout << result << endl;
    }

    return 0;
}