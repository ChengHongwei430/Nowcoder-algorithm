
//��Ŀ����
//��������Ǽ������������ĺ͡�
//��������
//������������У�ÿ��������������a��b���ɿո�ָ���
//�������
//����ÿ�����룬���a��b�ĺͣ�ÿ��������һ�����С�

#include<iostream>
using namespace std;

int main() {
    //string s;
    //while(getline(cin,s)){

        //cout<<s.size()<<endl;
        //s.size()������β����\0
        //int sum=0;
        //for(int i=0;i<s.size();++i){
            //if(s[i]!=' ') sum+=s[i]-'0';
            //ASCII��ֻ��ʶ��0~9���������ַ���
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