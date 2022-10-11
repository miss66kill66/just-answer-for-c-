#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str[80];
    int i, n;
    cout<<"Please enter string number: ";
    cin>>n;
    for (i=0; i<n; i++){
        cout<<"Please enter No."<<i+1<<" string: ";
        cin>>str[i];
    }
    for (i=0; i<n; i++)
        if (str[i][0]=='A')
            cout<<str[i]<<endl;
    system("pause");
    return 0;
}
//£¡ 
