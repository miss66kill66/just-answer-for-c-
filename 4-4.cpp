#include<iostream>
using namespace std;
int main()
{
  int fac(int);
  int sum = 0 ;
  int a;
  int b;
  int c;
  cout<<"����abc��ֵ";
  cin>>a>>b>>c;
  sum += fac(a) + fac(b) + fac(c);
  cout<<"��Ϊ��"<<sum<<endl;
  return 0;
}
 
int fac(int n){
 int f =1;
 for(int i=1;i<=n;i++){
   f= f*i;
 }
 return f;
}
