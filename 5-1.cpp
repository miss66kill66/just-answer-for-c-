#include<stdio.h>
int main()
{
	int a[100],j;                                                  
	for(j=1;j<=100;j++)
		a[j]=j;
	for(int i=2;i<=100/2;i++)
	for(j=2;j<=100;j++){
		if(j%i==0&&j!=i)
			a[j]=0;
	}
	printf("100以内的素数为：\n");
	for(j=2;j<=100;j++)
	if(a[j]!=0)
	printf("%d ",a[j]);
 } 

