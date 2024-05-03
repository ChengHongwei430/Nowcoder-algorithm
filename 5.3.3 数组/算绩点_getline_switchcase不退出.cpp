
//switch 语句的工作原理
//匹配值 : switch 语句会将一个变量的值与每个 case 分支的值进行比较。
//执行分支 : 如果找到匹配的 case 分支，就会执行该分支的代码。
//继续执行(无 break): 如果没有遇到 break 语句，switch 语句会继续执行后面的所有 case 分支，无论后面的分支是否匹配。


#include<iostream>
#include <string>//getline的头文件
using namespace std;

int main() {

    string s;

    while (getline(cin, s)) {

        double sum = 0;

        bool flag = false;

        for (int i = 0; i < s.size(); ++i) {


            switch (s[i]) {

            case 'A': {
                sum += 4;
                break;
            }
            case 'B': {
                sum += 3;
                break;
            }
            case 'C': {
                sum += 2;
                break;
            }
            case 'D': {
                sum += 1;
                break;
            }
            case 'F': {
                sum += 0;
                break;
            }
            case ' ': {
                break;
            }
            default: {
                //cout<<"Unknown"<< endl;
                //printf("Unknow");
                flag = true;
                break;//case里的break只退出了switch
            }

            }

        }

        if (!flag) {
            sum /= (s.size() + 1) / 2;
            printf("%.2f\n", sum);//使用printf输出固定小数位的数字
        }
        else {
            cout << "Unknown" << endl;
            //printf("Unknow");
        }

    }
}