

#include <iostream>
using namespace std;

int main() {

	char s[] = "hello world   ";
	char S[100] ;

	int i = 0;
	while (s[i] != '\0') {
		cout << s[i] ;
		i++;
	}
	cout<< endl;

	i = 0;
	int len = 0;
	int countBank = 0;
	while (s[i]!='\0') {
		len++;
		if (s[i] == ' ') countBank++;
		i++;
	}
	cout << len << endl;
	cout << countBank << endl;

	int truelen = len + 2 * countBank;
	S[truelen] = '\0';

	//for (int i = 1, k = 1; i <= truelen; ++i, ++k) {
	//	if (s[len - k] != ' ') {
	//		S[truelen - i] = s[len - k];
	//	}
	//	else {
	//		S[truelen - i] = '0';
	//		i++;
	//		S[truelen - i] = '2';
	//		i++;
	//		S[truelen - i] = '%';
	//	}
	//}
	//
	////cout << S << endl;//直接输出字符串
	//i = 0;
	//while (S[i] != '\0') {
	//	cout << S[i];
	//	i++;
	//}

	for (int i = 1, k = 1; i <= truelen; ++i, ++k) {
		if (s[len - k] != ' ') {
			S[truelen - i] = s[len - k];
		}
		else {
			S[truelen - i] = '0';
			i++;
			S[truelen - i] = '2';
			i++;
			S[truelen - i] = '%';
		}
	}

	for (int p = 0; p < len + 2 * countBank; ++p) {
		cout << S[p];
	}
	cout << endl;


	////先统计空格的数量
	//int countS = 0;
	//int trunlen = 0;
	//for (int i = 0; i < length && str[i] != '\0'; ++i) {
	//	if (str[i] == ' ') {//符号用单引号
	//		++countS;
	//	}
	//	trunlen = i + 1;
	//}

	//if (countS == 0) return;
	//int newlength = trunlen + countS * 2;
	//str[newlength] = '\0';//我缺了一个终止符
	////不必新建增加的空间，直接赋值即可
	//for (int i = 1, k = 1; i <= newlength; ++i, ++k) {
	//	if (str[trunlen - k] != ' ') {
	//		str[newlength - i] = str[trunlen - k];
	//	}
	//	else {
	//		str[newlength - i] = '0';
	//		i++;
	//		str[newlength - i] = '2';
	//		i++;
	//		str[newlength - i] = '%';
	//	}
	//}


	system("pause");
	return 0;
}