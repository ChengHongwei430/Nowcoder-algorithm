
// vector ������Ϊ����������ΪC++ ��׼���е�һ�������࣬
// ��ʾ����ļ��ϣ������Զ�̬�ش洢һ��Ԫ�أ�
// ��������Ը�����Ҫ���ɵص��� vector �Ĵ�С��


////ͷ�ļ�
// #include <vector>
// using std::vector;

///��ʼ��
// vector<int> myVector = {1, 2, 3, 4, 5}; // ����һ����������Ԫ�ص���������ʼ��Ԫ��

// vector<int> myVector(10, -1); // ����һ������10���ظ�Ԫ�ص�������ÿ��Ԫ�ص�ֵ����-1

///���ӳ���
// push_back()����һ��ֵpush�����ͣ���vector�е�back(β��)

///��ȡ����
// ʹ�����õ�size()��������ȡ������Ԫ������,��дĬ�ϴ�0

///���ٳ���
// myVector.pop_back(); // ɾ��vectorĩβ��Ԫ��

///���
// myVector.clear(); // ���vector�е�����Ԫ��

///�ж��Ƿ�Ϊ��
// myVector.empty(); // �ж�vector�Ƿ񲻺����κ�Ԫ�أ�
// �������Ϊ0���򷵻��棬���򣬷��ؼ�

// int arr[n]���ֲ����ǲ�������ģ������ڱ������п��ܻᱨ��

// ������ڶ���������Ҫ�ֿ�����ʹ��cin.get()����ʶ�𵽻��з���
// cin.get()���Եõ���ǰ���������ֵ

#include<iostream>
#include<vector>

using namespace std;
using std::vector;

int main() {

    int n;
    while (cin >> n) {

        vector<int> num;
        while (cin >> n) {
            num.push_back(n);
            if (cin.get() == '\n') break;
            // ������ڶ���������Ҫ�ֿ�����ʹ��cin.get()����ʶ�𵽻��з���
            // cin.get()���Եõ���ǰ���������ֵ
        }

        for (int i = 0; i < num.size(); ++i) {
            cout << num[num.size() - 1 - i] << " ";
        }
        cout << endl;

        for (int i = 0; i < num.size(); ++i) {
            if ((i + 1) % 2 == 1)cout << num[i] << " ";
        }
        cout << endl;

    }

}