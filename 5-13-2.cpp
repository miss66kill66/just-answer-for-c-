#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main()
{
    char s1[20], s2[10];
    cout<<"Please enter string 1: ";
    cin>>s1;
    cout<<"Please enter string 2: ";
    cin>>s2;
    strcat(s1, s2);
    cout<<s1<<endl;
    system("pause");
    return 0;
}
