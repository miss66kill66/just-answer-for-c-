#include <iostream>
using namespace std;

double Legendre(int n,int x){
	if(n==0)
		return 1;
	else if(n==1)
		return x;
	else 
		return ((2*n-1)*x*Legendre(n-1,x)-(n-1)*Legendre(n-2,x))/n;
}

int main(){
	
	cout<<"请输入正整数n和x：";
	int n,x;
	cin>>n>>x;
	cout << "P" << n << "(" << x << ") = " << Legendre(n,x) << endl;		
	return 0;
}

