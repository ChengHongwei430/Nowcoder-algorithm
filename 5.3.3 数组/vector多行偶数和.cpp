

#include<iostream>
#include<vector>
using namespace std;
using std::vector;

int main() {

    int x;
    while (cin >> x) {
        int sum = 0;
        while (x > 1) {
            if ((x % 10) % 2 == 0) sum += x % 10;
            x /= 10;
        }
        cout << sum << endl;
        cout << endl;
    }

}

//#include<iostream>
//using namespace std;
//
//int main() {
//
//    string x;
//    while (getline(cin, x)) {
//        //��һ�еļ��������ŵ��ַ���x��
//        int sum = 0;
//        for (int i = 0; i < x.size(); ++i) {
//            //�ַ����ĳ���x.size()
//            if ((x[i] - '0') % 2 == 0) sum += x[i] - '0';
//        }
//        cout << sum << endl;
//        cout << endl;
//    }
//
//}