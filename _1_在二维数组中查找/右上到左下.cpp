#include<iostream>
using namespace std;
#include"��ͷ.h"//����<>������

int main() {

	int data[4][4] = {
		{1, 2, 8, 9},
		{2, 4, 9, 12},
		{4, 7, 10, 13},
		{6, 8, 11, 15}
	};//��ά����

	int cinn;
	//cout << &data[0][0] << endl;
	cout << "����������Ҫ���ҵ�������" << endl;
	cin >> cinn;

	int i = 0;
	int j = 3;

	while(i<=3&&j>=0){
			if (cinn == data[i][j]) {
				cout << "��һ������λ�ڵ�" <<i+1<<"�У�"<< "��" <<j+1<< "��" << endl;
				system("pause");
				return 0;
			}
			else if (cinn > data[i][j]) ++i;
			else --j;
	}

	cout << "δ�ҵ���" << endl;
	system("pause");
	return 0;
}