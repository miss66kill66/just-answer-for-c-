#include<stdio.h>

int flag(int year)//�ж��Ƿ������� 
{
	int s=0;
	if(year%4==0&&year%400!=0||year%100==0&&year%400==0)
	s=1;
	return s;
}
int date(int mon,int day)//����ʱ������ 
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
	printf("�������ڣ�\n");//������������ 
	scanf("%d%d%d",&year,&mon,&day);
	sum=date(mon,day);//�������� 
	p=flag(year);
	if(mon>=3&&p==1)//����Ҫ��һ�� 
	sum++;
	printf("%d��%d��%d������һ��ĵ�%d��\n",year,mon,day,sum);
}

