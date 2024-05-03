
//题目描述
//你的任务是计算两个整数的和。
//输入描述
//输入包含若干行，每行输入两个整数a和b，由空格分隔。
//输出描述
//对于每组输入，输出a和b的和，每行输出后接一个空行。

#include<iostream>
using namespace std;

int main() {
    //string s;
    //while(getline(cin,s)){

        //cout<<s.size()<<endl;
        //s.size()不包含尾部的\0
        //int sum=0;
        //for(int i=0;i<s.size();++i){
            //if(s[i]!=' ') sum+=s[i]-'0';
            //ASCII码只能识别0~9，不能用字符串
       // }
//cout<<sum<<endl;
   // }

    int x, sum = 0;
    while (cin >> x) {
        sum += x;
        if (cin.get() == '\n') {
            cout << sum << endl;
            cout << endl;
            sum = 0;
        }
    }
    cout << sum << endl;
    cout << endl;
}