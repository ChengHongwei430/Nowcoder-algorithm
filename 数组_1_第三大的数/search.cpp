
// ����һ���ǿ����飬���ش������е����������
// ��������ڣ��򷵻���������������
// Ҫ���㷨ʱ�临�Ӷȱ�����O(n)��

#include<iostream>
using namespace std;

int main() {

	int data[] = { 1,2};

	//int a = INT_MIN;//��С����������
	//int b = INT_MIN;
	//int c = INT_MIN;

	int a = LONG_MIN;
	//////////////////////////////��С����������
	int b = LONG_MIN;
	int c = LONG_MIN;

	for (int i = 0; i < sizeof(data) / sizeof(int); i++) {
		//////////////////////////////nums.size()
		if (data[i] > a) {
			if (data[i] > b) {
				if (data[i] > c) {
					long temp1 = c;
					long temp2 = b;
					c = data[i];
					b = temp1;
					a = temp2;
				}
				else if( data[i] < c) {
					long temp = b;
					b = data[i];
					a = temp;
				}
			}
			else if(data[i] < b)  a = data[i];
		}
		cout << "���飺" << a << "        " << b << "      " << c << endl;
		int dd = 1;
	}

	/*if (nums[i] > c) {
		a = b;
		b = c;
		c = nums[i];
	}
	else if (nums[i] < c && nums[i] > b) {
		a = b;
		b = nums[i];
	}
	else if (nums[i] > a && nums[i] < b) {
		a = nums[i];
	}*/

	int l = (a == INT_MIN) ? c : a;
	cout << "���أ�" << l << endl;

	system("pause");
	return 0;
}
