#include <iostream>
#include <string>
using namespace std;
void connect(char str1[], char str2[]);
int main()
{
    char s1[20], s2[10];
    cout<<"Please enter string 1: ";
    cin>>s1;
    cout<<"Please enter string 2: ";
    cin>>s2;
    connect(s1, s2);
    cout<<s1<<endl;
    system("pause");
    return 0;
}
void connect(char str1[], char str2[])
{
    int i, j;
    for (i=0; str1[i]!='\0'; i++);
    for (j=0; str2[j]!='\0'; str1[i++]=str2[j++]);
    str1[i]='\0';
}
