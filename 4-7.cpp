#include <iostream>
#include <math.h>
using namespace std;
//写一个函数验证哥德巴赫猜想
int main()
{
	void godbaha(int n);
	int x;
	bool prime(int m);
	cout<<"Please input a number:"<<endl;
	cin>>x;
	godbaha(x);
	
	return 0;
}
bool prime(int m)
{	int k,i;
	k=sqrt((float)m);
	for(i=2;i<=k;i++)
		if(m%i==0) break;
		if(i>k) return 1;//如果是素数，返回1
		else return 0;//如果不是素数，返回0
}
void godbaha(int n){
	int a,b,i;
	
	for(i=3;i<=n/2;i++)//6是最小的可以表示为两个素数之和的偶数，6=3+3，
			if (prime(i))
				{
					a=i;
					b=n-a;
					if(prime(b)) break;
				}
		
		cout<<n<<"="<<a<<"+"<<b<<endl;
}

