#include<iostream>
using namespace std;
int main(){
	char a[50];
	cout<<"please input a string:";
	cin>>a;
	int i=0,k=0;
	while(i<50){
        if(a[i]=='\0'){
        	k=i;
        	break;
        }
        i++;
	}
       cout<<"reverse order: ";
        for(;k>=0;k--){
		cout<<a[k];
	}
	cout<<endl;
	return 0;
	
} 
