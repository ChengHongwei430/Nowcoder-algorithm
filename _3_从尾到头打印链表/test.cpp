
#include <iostream>
#include<vector>
using namespace std;

int main() {

	vector<int> myVector = { 100,200,300,400,500 };//在赋值后就可以通过arr[i]形式来修改
	myVector.resize(6);//初始化后也可以修改格式

	myVector[0] = 111; // 修改索引为0的元素
	myVector[1] = 222; // 修改索引为0的元素
	//输出内容是：111 222 300 400 500
	for (int i = 0; i < myVector.size(); i++) {
		cout << myVector[i] << " ";
	}
	cout << endl;

	myVector = { 100,200,300,300,500,600 };
	vector<int>::iterator it = find(myVector.begin(), myVector.end(), 300);
	//输出内容为：目标元素的索引为: 4
	if (it != myVector.end()) {
		cout << "目标元素的索引为: " << distance(myVector.begin(), it) << endl;
	}
	else {
		cout << "没有找到" << endl;
	}
	reverse(myVector.begin(), myVector.end());
	for (int i = 0; i < myVector.size(); i++) {
		cout << myVector[i] << " ";
	}
	cout << endl;


	//vector<int> arr;

	//int i = 0;
	//while (i<10) {
	//	arr.push_back(i);//不能用arr[i]形式来存储
	//	++i;
	//}


	//i = 0;
	//while (i < 10) {
	//	cout << arr[i] << endl;//但可以用它输出
	//	++i;
	//}


	system("pause");
	return 0;
}