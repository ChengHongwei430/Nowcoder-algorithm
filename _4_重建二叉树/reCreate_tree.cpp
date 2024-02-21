#include <iostream>
#include<vector>
using namespace std;

struct TreeNode {
	int val;
	struct TreeNode* left;
	struct TreeNode* right;
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
vector<int> pre = { 1,2,4,7,3,5,6,8 };
vector<int> vin = { 4,7,2,1,5,3,8,6 };

TreeNode* Create(vector<int> pre, vector<int> vin) {

	if (pre.size() == 0 || vin.size() == 0) return NULL;

	TreeNode* root = new TreeNode(pre[0]);//////////一定要有值

	int mid = distance(vin.begin(), find(vin.begin(), vin.end(), pre[0]));//在中序排列里计算距离

	vector<int> leftpre(pre.begin() + 1, pre.begin() + mid +1);
	vector<int> leftvin(vin.begin() , vin.begin() + mid);
	vector<int> rightpre(pre.begin() + mid + 1, pre.end());
	vector<int> rightvin(vin.begin() + mid + 1, vin.end());////////容器数组的用法

	root->left = Create(leftpre, leftvin);
	root->right = Create(rightpre,rightvin);

	return root;

}

void TreeShow(TreeNode* root) {
	if (root !=  NULL) {

		cout << root->val;
		if (root->left) {
			cout << root->left->val;
		}
		else {
			cout << "#";
		}
		if (root->right) {
			cout << root->right->val;
		}
		else {
			cout << "#";
		}
		cout << endl;

		if (root->left) TreeShow(root->left);
		if (root->right) TreeShow(root->right);
		
	}
	return;
}


int main() {

	TreeNode* root = new TreeNode(0);//一定要有值
	root=Create(pre, vin);

	cout << "生成树：";

	//cout << root->right->val << endl;

	TreeShow(root);

	system("pause");
	return 0;
}