#include<iostream>
#include<string>
using namespace std;
int main()
{
	const int n = 4;
	string str[n],t;
	int i,j;
	for (i = 0; i < n; i++)
		cin >> str[i];//�Ӽ�������n���ַ���
	for(i=0;i<n-1;i++)//�Ƚϵ�����
	for(j=0;j<n-1-i;j++)//ÿ�˱ȽϵĴ���
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
//�� 
