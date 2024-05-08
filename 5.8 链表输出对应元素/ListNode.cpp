
#include<iostream>
#include<vector>
using namespace std;


//д����Ľṹ��
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) :val(x), next(NULL) {}
    //�ṹ�幹�캯��
};

class ManageList {
public://////////��д���������������޷�ʹ��
    static int printfListk(ListNode* head, int k);
};

///���ǻ�����д�����ķ���ֵ����
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
            //��������Խ�磬����������������������Ҫ��������
            if (x <= 0 || x > n) cout << "Output position out of bounds." << endl;
            else cout << ManageList::printfListk(head->next, data[i]) << endl;
        }


    }

}