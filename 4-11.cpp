#include <stdio.h>
int sq(int n){
	int sum;
	if (n==1)
		return 1;
	else
		sum=n*n+sq(n-1);
	return sum;
}
int main(){
	int n,sum;
	scanf("%d",&n);
	sum=sq(n);
	printf("%d",sum);
	return 0;
}
