#include <stdio.h>
void tr(int n){
	int i;
	if (n<0){
		putchar('-');
		n=-n;
	}
	if ((i=n/10)!=0){
		tr(i);
	}
	printf("%d",n%10);
}


//432/10
int main(){
	int n;
	printf("������n��ֵ");
	scanf("%d",&n); 
	tr(n);
	return 0;
		
} 
