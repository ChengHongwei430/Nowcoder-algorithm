
#include<iostream>
using namespace std;
#include"��ͷ.h"//����<>������

bool mid_search(int a[],int b, int len) {
	int low = 0;
	int high = len - 1;
	while (low<=high) {
		len = len / 2;
		if (b < a[(low + high)/2]) high= (low + high) / 2-1;
		else if (b > a[(low + high) / 2]) low = (low + high) / 2+1;
		else return true;
	}
	return false;
}

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

	bool temp = false;
	for (int i = 0; i <= 3; ++i) {
		temp = mid_search(data[i], cinn, 4);
	}

	if (temp == true) {
		cout << "���ҳɹ���" << endl;
	}
	else {
		cout << "����ʧ�ܣ�" << endl;
	}

	system("pause");
	return 0;
}