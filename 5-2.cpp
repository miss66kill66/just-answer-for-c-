#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int a[10];
  int i,j;
  int min;
  int temp;
  cout<<"请输入10个整数";
  for(i=0;i<10;i++)
     cin>>a[i];
  for(i=0;i<9;i++){
    min = i;
    for(j=i+1;j<10;j++)
        if(a[min]>a[j]){
             min = j ;
             temp = a[i];
             a[i] = a[min];
             a[min] = temp;//i和j上面的数字换位置
        }
  }
  cout<<"排完序后：";
  for(i=0;i<10;i++)
     cout<<a[i]<<" ";
  return 0;
}
