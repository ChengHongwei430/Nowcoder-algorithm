
//switch ���Ĺ���ԭ��
//ƥ��ֵ : switch ���Ὣһ��������ֵ��ÿ�� case ��֧��ֵ���бȽϡ�
//ִ�з�֧ : ����ҵ�ƥ��� case ��֧���ͻ�ִ�и÷�֧�Ĵ��롣
//����ִ��(�� break): ���û������ break ��䣬switch �������ִ�к�������� case ��֧�����ۺ���ķ�֧�Ƿ�ƥ�䡣


#include<iostream>
#include <string>//getline��ͷ�ļ�
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
                break;//case���breakֻ�˳���switch
            }

            }

        }

        if (!flag) {
            sum /= (s.size() + 1) / 2;
            printf("%.2f\n", sum);//ʹ��printf����̶�С��λ������
        }
        else {
            cout << "Unknown" << endl;
            //printf("Unknow");
        }

    }
}