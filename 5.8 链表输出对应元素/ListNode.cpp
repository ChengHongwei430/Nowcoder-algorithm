
#include<iostream>
#include<vector>
using namespace std;


//写链表的结构体
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) :val(x), next(NULL) {}
    //结构体构造函数
};

class ManageList {
public://////////不写公开其他函数就无法使用
    static int printfListk(ListNode* head, int k);
};

///还是会忘记写函数的返回值类型
int ManageList::printfListk(ListNode* head, int k) {

    if (k <= 0) return 0;
    while (k > 1 && head) {
        k--;
        head = head->next;
    }
    if (head == NULL) return 0;
    return head->val;

}

int main() {

    int n, k;

    while (cin >> n >> k) {

        if (n <= 0) return 0;

        int x;
        ListNode* head = new ListNode(0);
        ListNode* pre = head;

        for (int i = 0; i < n; ++i) {
            cin >> x;
            ListNode* p = new ListNode(x);
            p->next = pre->next;
            pre->next = p;
            pre = p;
        }

        pre = head->next;
        while (pre) {
            //cout<<pre->val<<" ";
            pre = pre->next;
        }
        //cout<<endl;


        vector<int> data;
        for (int i = 0; i < k; ++i) {
            cin >> x;
            data.push_back(x);
            //对于索引越界，空链表，空数组等特殊情况需要单独考虑
            if (x <= 0 || x > n) cout << "Output position out of bounds." << endl;
            else cout << ManageList::printfListk(head->next, data[i]) << endl;
        }


    }

}