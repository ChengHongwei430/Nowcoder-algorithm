
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {

    int n;
    while (cin >> n) {

        string s;

        while (getline(cin, s)) {

            vector<char> sdata;
            vector<int> count;
            int maxi = 0;
            int maxf = 0;
            bool flag = false;

            for (int i = 0; i < s.size(); ++i) {

                for (int j = 0; j < sdata.size(); ++j) {
                    if (s[i] == sdata[j]) {
                        flag = true;
                        count[j]++;
                        if ((count[j] > maxf) || (count[j] == maxf && sdata[j] < sdata[maxi])) maxi = j;
                        //��¼����Ƶ����ߵ�
                    }
                }

                if (flag = false) {
                    sdata.push_back(s[i]);
                    //���ַ����붯̬����
                    count.push_back(0);
                }

            }

            cout << sdata[maxi] << endl;

        }
    }
}