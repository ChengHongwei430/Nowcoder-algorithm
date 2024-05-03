
// vector （被称为容器），做为C++ 标准库中的一个容器类，
// 表示对象的集合，它可以动态地存储一组元素，
// 所以你可以根据需要轻松地调整 vector 的大小。


////头文件
// #include <vector>
// using std::vector;

///初始化
// vector<int> myVector = {1, 2, 3, 4, 5}; // 创建一个包含整数元素的容器并初始化元素

// vector<int> myVector(10, -1); // 创建一个包含10个重复元素的容器，每个元素的值都是-1

///增加长度
// push_back()负责将一个值push（推送）到vector中的back(尾端)

///获取长度
// 使用内置的size()方法来获取容器的元素数量,不写默认存0

///减少长度
// myVector.pop_back(); // 删除vector末尾的元素

///清空
// myVector.clear(); // 清空vector中的所有元素

///判断是否为空
// myVector.empty(); // 判断vector是否不含有任何元素，
// 如果长度为0，则返回真，否则，返回假

// int arr[n]这种操作是不被允许的，并且在编译器中可能会报错

// 如果存在多行数据需要分开处理，使用cin.get()可以识别到换行符号
// cin.get()可以得到当前键盘输入的值

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
            // 如果存在多行数据需要分开处理，使用cin.get()可以识别到换行符号
            // cin.get()可以得到当前键盘输入的值
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