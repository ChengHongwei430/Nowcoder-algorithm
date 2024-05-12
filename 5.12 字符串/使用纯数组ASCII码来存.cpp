
#include<iostream>
#include<string>
using namespace std;

int main() {


    string s;
    int n;

    while (cin >> n) {

        getchar();//吞了回车

        for (int i = 0; i < n; ++i) {

            int data[26] = { 0 };////////全0的写法,英文字母有26个

            getline(cin, s);

            for (int j = 0; j < s.size(); ++j) {

                data[s[j] - 'a']++;//除了申请空间，都可以直接使用不确定的变量

            }

            int count = 0;
            char result;

            for (int j = 0; j < 26; ++j) {////////不是字符串长度，是字母数量

                if (data[j] > count) {
                    count = data[j];
                    result = 'a' + j;
                }

            }

            cout << result << endl;
        }


    }

}