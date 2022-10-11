#include<iostream>
#include<cmath>
#include<iomanip> 
using namespace std;
#define s(a,b,c) (a+b+c)/2
#define area(a,b,c,s) sqrt(s*(s-a)*(s-b)*(s-c))
int main(){
    double a,b,c;
    cin>>a>>b>>c;
    cout<<fixed<<setprecision(3)<<area(a,b,c,s(a,b,c))<<endl;
    return 0;
}
