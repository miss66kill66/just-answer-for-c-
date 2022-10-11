#include<iostream>
#include<string>
#include<string.h> 
using namespace std;
int main(){
	char a[50];
	cout<<"please input a string:";
	cin>>a;
	int k=0;
	k=strlen(a);
	cout<<"Reverse order: ";
	for(;k>=0;k--){
		cout<<a[k];
	}
	cout<<endl;
	return 0;
	
} 
