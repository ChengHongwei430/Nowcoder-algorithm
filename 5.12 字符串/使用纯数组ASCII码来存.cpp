
#include<iostream>
#include<string>
using namespace std;

int main() {


    string s;
    int n;

    while (cin >> n) {

        getchar();//���˻س�

        for (int i = 0; i < n; ++i) {

            int data[26] = { 0 };////////ȫ0��д��,Ӣ����ĸ��26��

            getline(cin, s);

            for (int j = 0; j < s.size(); ++j) {

                data[s[j] - 'a']++;//��������ռ䣬������ֱ��ʹ�ò�ȷ���ı���

            }

            int count = 0;
            char result;

            for (int j = 0; j < 26; ++j) {////////�����ַ������ȣ�����ĸ����

                if (data[j] > count) {
                    count = data[j];
                    result = 'a' + j;
                }

            }

            cout << result << endl;
        }


    }

}