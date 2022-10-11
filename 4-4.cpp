#include<iostream>
using namespace std;
int main()
{
  int fac(int);
  int sum = 0 ;
  int a;
  int b;
  int c;
  cout<<"输入abc的值";
  cin>>a>>b>>c;
  sum += fac(a) + fac(b) + fac(c);
  cout<<"和为："<<sum<<endl;
  return 0;
}
 
int fac(int n){
 int f =1;
 for(int i=1;i<=n;i++){
   f= f*i;
 }
 return f;
}
