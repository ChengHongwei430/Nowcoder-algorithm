
//���ס��main�����ķ�������һ����int
// 
//iostream�����ṩ�����������Ĺ���
// 
//��ʹ��C++��׼��Ĺ���ʱ����Ҫʹ�������ռ��޶�����ָ����Ҫʹ�õ�����λ���ĸ������ռ��С�
//ͨ������ʹ�� std:: ��ǰ׺����ʾ����ʹ��C++��׼���е����ݡ�
//��׼�ⶨ����������ֶ��������ռ�std�У�
//�������Ҫʹ��cin�Ļ�����Ҫ���ҵ������ռ䣬Ȼ����ʹ��cin������std::cin\
//ͳһ����ʹ�������ռ� std
//using namespace std

//while(std::cin >> a >> b) ��ʾ��������a �� b


#include<iostream>
using namespace std;

int main() {

    int a, b;

    while (cin >> a >> b) {///////cin���治��дendl

        int result = a + b;
        cout << result << endl;

    }
    system("pause");

    return 0;
}