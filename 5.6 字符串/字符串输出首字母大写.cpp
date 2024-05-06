
//ASCII码中，小写的a是97，大写字母比小写字母小32


#include<iostream>
#include<string>

using namespace std;

int main() {

    int n;
    while (cin >> n) {
        getchar(); // 从输入中获取一个字符
        //因为n之后有一个回车符，如果不提取，
        //下面的s会得到一个空字符串
        for (int i = 0; i < n; ++i) {
            string s;
            getline(cin, s);
            for (int j = 0; j < s.size(); ++j) {
                if (j == 0 && s[j] >= 'A' && s[j] <= 'z') {
                    if (s[j] >= 'a' && s[j] <= 'z') s[j] -= 32;
                    //有可能直接读到大写字母
                    cout << s[j];
                    //直接输出s[j]-32不可以，会输出数字
                }
                //使用s[j]>='A'&&s[j]<='z'来表示字母型符号，不能忘记等号
                if (j > 0 && s[j - 1] == ' ' && s[j] >= 'A' && s[j] <= 'z') {
                    if (s[j] >= 'a' && s[j] <= 'z') s[j] -= 32;
                    cout << s[j];
                }
            }
            cout << endl;
        }
    }


}