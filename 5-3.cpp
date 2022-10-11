#include<stdio.h>
int main()
{
	int a[3][3],sum=0;
	int i,j;
	printf("输入一组3*3矩阵数据："); 
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	scanf("%d",&a[i][j]);//输入矩阵的值 
	printf("输出对角线数值之和："); 
	for(i=0;i<3;i++)
	sum+=a[i][i];//对角线求和 
	printf("%d",sum);
}

