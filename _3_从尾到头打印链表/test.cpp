
#include <iostream>
#include<vector>
using namespace std;

int main() {

	vector<int> myVector = { 100,200,300,400,500 };//�ڸ�ֵ��Ϳ���ͨ��arr[i]��ʽ���޸�
	myVector.resize(6);//��ʼ����Ҳ�����޸ĸ�ʽ

	myVector[0] = 111; // �޸�����Ϊ0��Ԫ��
	myVector[1] = 222; // �޸�����Ϊ0��Ԫ��
	//��������ǣ�111 222 300 400 500
	for (int i = 0; i < myVector.size(); i++) {
		cout << myVector[i] << " ";
	}
	cout << endl;

	myVector = { 100,200,300,300,500,600 };
	vector<int>::iterator it = find(myVector.begin(), myVector.end(), 300);
	//�������Ϊ��Ŀ��Ԫ�ص�����Ϊ: 4
	if (it != myVector.end()) {
		cout << "Ŀ��Ԫ�ص�����Ϊ: " << distance(myVector.begin(), it) << endl;
	}
	else {
		cout << "û���ҵ�" << endl;
	}
	reverse(myVector.begin(), myVector.end());
	for (int i = 0; i < myVector.size(); i++) {
		cout << myVector[i] << " ";
	}
	cout << endl;


	//vector<int> arr;

	//int i = 0;
	//while (i<10) {
	//	arr.push_back(i);//������arr[i]��ʽ���洢
	//	++i;
	//}


	//i = 0;
	//while (i < 10) {
	//	cout << arr[i] << endl;//�������������
	//	++i;
	//}


	system("pause");
	return 0;
}