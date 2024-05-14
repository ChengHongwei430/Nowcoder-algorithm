
#include<iostream>
#include<stack>
using namespace std;


//���n���̴� ��ʼ��from �Ƶ� Ŀ����to ������ �м���via Ϊ�����ĵݹ麯��

struct stack_hanoi {
    int pc, n;
    //�����������ջ�����
    char from, to, via;
    //��ʼ����Ŀ�������м���
};

//�ݹ麺ŵ��
void hanoi_recur(int n, char from, char to, char via) {
    if (n == 1) cout << from << "->" << to << endl;
    else {
        hanoi_recur(n - 1, from, via, to);
        hanoi_recur(1,from, to, via);
        hanoi_recur(n - 1, via, to, from);
    }
}

//�ǵݹ麺ŵ������ջ����
void push(stack<stack_hanoi>& st,int n, char from, char to, char via,int pc) {
    stack_hanoi  x;
    x.n = n;
    x.from = from;
    x.via = via;
    x.to = to;
    x.pc = pc;
    st.push(x);
}


int main() {

    //����
    cout << "�ݹ�棺" << endl;
    char from = 'a', via = 'b', to = 'c';
    int N = 3;
    hanoi_recur(N, from, to, via);

    cout << "�ǵݹ�棺" << endl;

    stack<stack_hanoi> st;//��һ��ջ����ģ��ϵͳջ
    stack_hanoi a;
    a.n = N;
    a.from = 'a';
    a.via = 'b'; 
    a.to = 'c';
    a.pc= 0;  
    st.push(a);

    while (!st.empty()) {

        stack_hanoi x = st.top();
        int n = x.n;
        int pc = x.pc;
        char f = x.from;       
        char v = x.via;
        char t = x.to;
        st.pop();

        for (int i = 0; i < st.size(); ++i) {
            cout << "������";
        }
        cout<< n << x.from << "->" << x.to <<"(" <<pc<<")" << endl;
        /*if (pc == 0) cout << "��" << st.size() << "��" << "��" << pc + 1 << "����" << n << x.from << "->" << x.to << endl;
        else if (pc == 3) cout << "��" << st.size() << "��" << "��" << pc+1 << "����" << "break" << endl;
        else cout << "��" << st.size() << "��" << "��" << pc+1 << "����" << endl;*/


        switch (x.pc) {
            
            case 0:
                if(x.n==1) cout << x.from << "->" << x.to << endl;
                else {
                    push(st, n, f, t, v, pc+1);//���ɵ�ǰ���һ���ƶ�����
                    push(st, n-1, f, v, t, 0);
                    // ��㵽��ת
                    // Ϊ��������һ�����������
                    // ����һ�����ɲ���ʱ����һ��ջ֡�ͻᱻ�ͷ�
                }
                break;

            case 1:
                push(st, n, f, t, v, pc + 1);
                push(st, 1, f, t, v, 0);//��㵽Ŀ��
                break;

            case 2:
                push(st, n, f, t, v, pc + 1);
                push(st, n-1, v, t, f, 0);//��ת��Ŀ��
                break;

            case 3:
                break;

        }
        //ÿһ�㶼������һ��case 0/1/2/3,ֻ���Ⲣ��������������,3���˳����Ҿͺ�����
        //����:
        //      ��һ��             �ڶ���              ������
        //     n=3,pc=0
        //       3a-c
        //     n=3,pc=1           n=2,pc=0
        //                          2a-b
        //                        n=2,pc=1         1a-c��n=1ֱ��ִ�У�
        //                          1a-b
        //                        n=2,pc=2
        //                          1c-b
        //                        n=2,pc=3
        //       1a-c
        //     n=3,pc=2
        //       2b-c
        //               1b-a
        //               1b-c
        //               1a-c
    }
    system("pause");
}