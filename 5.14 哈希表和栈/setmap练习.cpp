
#include<iostream>
#include<string>
#include<vector>
#include<unordered_set>
#include<unordered_map>//��Ҫ����unordered_set֮��ĺ��
using namespace std;

//set��map���Ӳ�ͬ��set��insert,map��map[first]=second;
//ɾ����ͬ������erase(first)
//�������ǵ�������unordered_set<int>::iterator i
//begin() end()


int main() {

    //srand(time(NULL));

    //unordered_set<int> myset;//�����ϣ��

    //for (int i = 1; i < 10; ++i) myset.insert(i);//��1-9����
    //for(int i = 1; i < 10; ++i) {
    //    int a = rand()%9;//�������rand�������������Χ������ֵ
    //    //cout << a << endl;
    //    if (rand() % 9 > 5)
    //        myset.erase(i);
    //}
    //for (unordered_set<int>::iterator i = myset.begin(); i != myset.end(); ++i) {
    //    cout << *i << endl;
    //}

    srand(time(NULL));

    unordered_map<char,int> mymap;//�����ϣ��

    //���
    for (int i = 1; i < 10; ++i) {
        char a = 'a' + i;
        //mymap[a]=i;
        mymap.insert(make_pair(a, i));
    }

    //����
    for (unordered_map<char,int>::iterator i = mymap.begin(); i != mymap.end(); ++i) {
        cout << i->first<< i->second <<" ";
    }
    cout<<endl;

    //ɾ��
    for (int i = 1; i < 10; ++i) {
        int a = rand() % 9;//�������rand�������������Χ������ֵ
        //cout << a << endl;
        if (rand() % 9 > 5) mymap.erase('a'+i);//ֻ�ܴ�i->first��ɾ��
    }

    //����
    for (unordered_map<char, int>::iterator i = mymap.begin(); i != mymap.end(); ++i) {
        cout << i->first << i->second << " ";
    }
    cout << endl;
    
    

    system("pause");
    
}