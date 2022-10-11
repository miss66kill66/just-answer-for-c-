#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  double e(double);
  double x;
  double sinh;
  cout<<"ÊäÈëx£º";
  cin>>x;
  sinh = e(x) + e(-x);
  cout<<"sinh("<<x<<")="<<sinh<<endl;
  return 0;
}
 
 
double e(double x){
  return exp(x);
}
