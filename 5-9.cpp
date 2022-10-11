#include<stdio.h>

int flag(int year)//判断是否是闰年 
{
	int s=0;
	if(year%4==0&&year%400!=0||year%100==0&&year%400==0)
	s=1;
	return s;
}
int date(int mon,int day)//计算时间天数 
{
	int s=0;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	for(int i=0;i<mon-1;i++)
	s=s+a[i];
	s=s+day;
	return s;
}
int main()
{
	int year,mon,day,sum,p;
	printf("输入日期：\n");//键盘输入日期 
	scanf("%d%d%d",&year,&mon,&day);
	sum=date(mon,day);//计算天数 
	p=flag(year);
	if(mon>=3&&p==1)//闰年要多一天 
	sum++;
	printf("%d年%d月%d日是这一年的第%d天\n",year,mon,day,sum);
}

