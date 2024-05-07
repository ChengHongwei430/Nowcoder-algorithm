//构建一个单向链表，链表中包含一组整数数据。输出链表中的所有元素。
//要求：
//1. 使用自定义的链表数据结构
//2. 提供一个 linkedList 类来管理链表，包含构建链表和输出链表元素的方法
//3. 在 main 函数中，创建一个包含一组整数数据的链表，然后调用链表的输出方法将所有元素打印出来

//输入描述
//包含多组测试数据，输入直到文件尾结束。 
//每组的第一行包含一个整数 n，表示需要构建的链表的长度。 
//接下来一行包含 n 个整数，表示链表中的元素。

#include<iostream>
#include<vector>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}//构造函数
};

class LinkedList {
public:
    static ListNode* mkList(int n, vector<int> data);
    static void showList(ListNode* head);
};//类的定义不能忘记函数返回值类型
//可以直接使用容器作为参数

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
        //只有静态函数可以使用函数名调用
        //因为一个类只有一个静态函数
        //普通的函数只能被类对象调用

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