
#include <iostream>
#include<vector>
using namespace std;

struct ListNode {
	int val;
	struct ListNode* next;
};

int main() {

	vector<int> temp;

	ListNode* L1 = new ListNode();
	L1->val = 1;

	ListNode* p = L1;
	for (int i = 0; i < 10; ++i) {
		ListNode* L = new ListNode();
		L->val = 1 + rand() % (9 - 1 + 1);//生成1-9的随机数
		p->next = L;
		p = L;
	}
	p = L1;
	cout << "初始链表：";
	while (p) {
		cout << p->val << " ";
		p = p->next;
	}
	cout << endl;


	for (int i = 0; L1!=NULL; ++i) {
		temp.push_back(L1->val);
		L1 = L1->next;
	}

	reverse(temp.begin(), temp.end());

	cout << "新的链表：";
	for (int i = 0; i < temp.size(); i++) {
		cout << temp[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}