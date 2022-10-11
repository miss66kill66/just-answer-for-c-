#include<iostream>
#include<string>
using namespace std;
int main()
{
	const int n = 4;
	string str[n],t;
	int i,j;
	for (i = 0; i < n; i++)
		cin >> str[i];//从键盘输入n个字符串
	for(i=0;i<n-1;i++)//比较的趟数
	for(j=0;j<n-1-i;j++)//每趟比较的次数
		if (str[j] > str[j + 1])
		{
			t = str[j];
			str[j] = str[j + 1];
			str[j + 1] = t;
		}
	for (i = 0; i < n; i++)
		cout << str[i] << "   ";
	return 0;
}
//！ 
