//����һ���������������а���һ���������ݡ���������е�����Ԫ�ء�
//Ҫ��
//1. ʹ���Զ�����������ݽṹ
//2. �ṩһ�� linkedList ��������������������������������Ԫ�صķ���
//3. �� main �����У�����һ������һ���������ݵ�����Ȼ�����������������������Ԫ�ش�ӡ����

//��������
//��������������ݣ�����ֱ���ļ�β������ 
//ÿ��ĵ�һ�а���һ������ n����ʾ��Ҫ����������ĳ��ȡ� 
//������һ�а��� n ����������ʾ�����е�Ԫ�ء�

#include<iostream>
#include<vector>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}//���캯��
};

class LinkedList {
public:
    static ListNode* mkList(int n, vector<int> data);
    static void showList(ListNode* head);
};//��Ķ��岻�����Ǻ�������ֵ����
//����ֱ��ʹ��������Ϊ����

ListNode* LinkedList::mkList(int n, vector<int> data) {

    ListNode* head = new ListNode(0);
    ListNode* pre = head;
    int x;
    for (int i = 0; i < n; ++i) {
        x = data[i];
        ListNode* p = new ListNode(x);
        p->next = pre->next;
        pre->next = p;
        pre = p;
    }
    return head->next;
};

void LinkedList::showList(ListNode* head) {
    ListNode* pre = head;
    while (pre) {
        cout << pre->val << " ";
        pre = pre->next;
    }
    cout << endl;
};


int main() {

    int n;
    while (cin >> n) {

        std::vector<int> data;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            data.push_back(x);
        }
        ListNode* p = LinkedList::mkList(n, data);
        LinkedList::showList(p);
        //ֻ�о�̬��������ʹ�ú���������
        //��Ϊһ����ֻ��һ����̬����
        //��ͨ�ĺ���ֻ�ܱ���������

    }

}


//int main(){

    //int n;
    //while(cin>>n){

        //ListNode* head=new ListNode(0);
        //ListNode* pre=head;

        //for(int i=0;i<n;++i){
            //int x;
            //cin>>x;
            //ListNode* p=new ListNode(x);
            //p->next=pre->next;
            //pre->next=p;
            //pre=p;
        //}

        //pre=head->next;
        //for(int i=0;i<n;++i){
            //cout<<pre->val<<" ";
            //pre=pre->next;
        //}
        //cout<<endl;
    //}

//}