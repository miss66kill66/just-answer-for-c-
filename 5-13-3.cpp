#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1, s2;
    cout<<"Please enter string 1: ";
    cin>>s1;
    cout<<"Please enter string 2: ";
    cin>>s2;
    s1+=s2;
    cout<<s1<<endl;
    system("pause");
    return 0;
}
