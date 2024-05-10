
#include<iostream>
#include<vector>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class linkedList {
public:
    static ListNode* makeList(vector<int> data, int len);
    static ListNode* insertList(ListNode* in, int x, int inx, int& len);
    static ListNode* removeList(ListNode* re, int x, int& len);
    static void showList(ListNode* s, int x);
};

ListNode* linkedList::makeList(vector<int> data, int len) {//���ﲻдstatic
    //��������
    ListNode* head = new ListNode(0);
    ListNode* pre = head;
    for (int i = 0; i < len; ++i) {
        ListNode* p = new ListNode(data[i]);
        pre->next = p;
        pre = p;
    }
    return head;
};

ListNode* linkedList::insertList(ListNode* in, int x, int inx, int& len) {
    ListNode* inxp = new ListNode(inx);
    //����Ԫ��
    if (x < 1) return in;
    ListNode* pre = in;
    for (int i = 0; i < x - 1; ++i) {
        pre = pre->next;
    }
    if (pre == NULL) return in;
    inxp->next = pre->next;
    pre->next = inxp;
    len = len + 1;
    return in;
};

ListNode* linkedList::removeList(ListNode* re, int x, int& len) {
    //ɾ��Ԫ��
    ListNode* pre = re;
    for (int i = 0; i < x - 1; ++i) {
        pre = pre->next;
    }
    if (pre == NULL) return re;
    pre->next = pre->next->next;
    len--;
    return re;
};

void linkedList::showList(ListNode* s, int x) {
    //չʾ��i��Ԫ��
    if (x < 1) return;
    ListNode* pre = s;
    for (int i = 0; i < x; ++i) {
        pre = pre->next;
        if (!pre) return;
    }
    cout << pre->val << " ";
};


int main() {
    vector<int> data;
    int n, in, re;
    cin >> n;
    //while(cin>>n){
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        data.push_back(x);
    }
    //}

    ListNode* h = linkedList::makeList(data, n);
    int len = n;



    cin >> in;
    for (int i = 1; i <= in; ++i) {
        int n, x;
        cin >> n >> x;
        //cout<<n<<x<<endl;
        h = linkedList::insertList(h, n, x, len);
        if (x <= len) {
            ListNode* p = h->next;
            int ii = 0;
            while (p) {
                //��������ָ����ƶ�
                //cout<<p->val<<" ";
                linkedList::showList(h, ++ii);
                p = p->next;//��չʾ���ƶ�
            }
            cout << endl;
        }
        else {
            cout << "Insertion position is invalid." << endl;
        }
    }

    if (!h) cout << 123 << endl;
    //////////���ܷ��ؿ�
    ///һ�β���ʧ�ܲ��ܻ�������
    //for(int i=1;i<=n;++i){
        //linkedList::showList(h,i);
    //}
    //cout<<endl;
    //�ں����ڲ�����ı���ֻ�ں����ڲ�


    cin >> re;
    for (int i = 1; i <= re; ++i) {
        int n;
        cin >> n;
        //cout<<n<<endl;
        h = linkedList::removeList(h, n, len);
        if (n >= 1 && n <= len) {
            ListNode* p = h->next;
            int ii = 0;
            while (p) {
                //��������ָ����ƶ�
                //cout<<p->val<<" ";
                linkedList::showList(h, ++ii);
                p = p->next;//��չʾ���ƶ�
            }
            cout << endl;
        }
        else {
            cout << "Deletion position is invalid." << endl;
        }
    }

};