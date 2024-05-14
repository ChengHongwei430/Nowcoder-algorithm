
#include<iostream>
#include<stack>
using namespace std;


//解决n个盘从 起始柱from 移到 目标柱to ，其中 中间柱via 为辅助的递归函数

struct stack_hanoi {
    int pc, n;
    //程序计数器，栈的深度
    char from, to, via;
    //起始柱，目标柱，中间柱
};

//递归汉诺塔
void hanoi_recur(int n, char from, char to, char via) {
    if (n == 1) cout << from << "->" << to << endl;
    else {
        hanoi_recur(n - 1, from, via, to);
        hanoi_recur(1,from, to, via);
        hanoi_recur(n - 1, via, to, from);
    }
}

//非递归汉诺塔的入栈操作
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

    //测试
    cout << "递归版：" << endl;
    char from = 'a', via = 'b', to = 'c';
    int N = 3;
    hanoi_recur(N, from, to, via);

    cout << "非递归版：" << endl;

    stack<stack_hanoi> st;//建一个栈，来模拟系统栈
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
            cout << "———";
        }
        cout<< n << x.from << "->" << x.to <<"(" <<pc<<")" << endl;
        /*if (pc == 0) cout << "第" << st.size() << "层" << "第" << pc + 1 << "步：" << n << x.from << "->" << x.to << endl;
        else if (pc == 3) cout << "第" << st.size() << "层" << "第" << pc+1 << "步：" << "break" << endl;
        else cout << "第" << st.size() << "层" << "第" << pc+1 << "步：" << endl;*/


        switch (x.pc) {
            
            case 0:
                if(x.n==1) cout << x.from << "->" << x.to << endl;
                else {
                    push(st, n, f, t, v, pc+1);//生成当前层的一次移动操作
                    push(st, n-1, f, v, t, 0);
                    // 起点到中转
                    // 为了生成下一层操作而存在
                    // 在下一层生成操作时，这一个栈帧就会被释放
                }
                break;

            case 1:
                push(st, n, f, t, v, pc + 1);
                push(st, 1, f, t, v, 0);//起点到目标
                break;

            case 2:
                push(st, n, f, t, v, pc + 1);
                push(st, n-1, v, t, f, 0);//中转到目标
                break;

            case 3:
                break;

        }
        //每一层都将产生一个case 0/1/2/3,只是这并不是连续产生的,3是退出，我就忽略了
        //比如:
        //      第一层             第二层              第三层
        //     n=3,pc=0
        //       3a-c
        //     n=3,pc=1           n=2,pc=0
        //                          2a-b
        //                        n=2,pc=1         1a-c（n=1直接执行）
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