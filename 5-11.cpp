#include <iostream>
#include <string>
using namespace std;
int main()
{
    //�ַ����鷽��
    int n=0;
    char arr[] = "*****";
    while (arr[++n]!='\0');
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++)
            cout<<" ";
        cout<<arr<<endl;
    }
    cout<<endl;
    //string����
    string str = "*****";
    int m = (int)(str.length());
  //int m = strlen(arr);
    for(int i=0;i<m;i++){
        for(int j=0;j<i;j++)
            cout<<" ";
        cout<<str<<endl;
    }
    return 0;
}
