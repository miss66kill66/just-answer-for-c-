#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,a[16],m,n,p,N,temp=0;
	printf("���밴���������15������\n");
	for(i=1;i<=15;i++)
	scanf("%d",&a[i]);
	printf("����Ҫ��ѯ������\n");
	scanf("%d",&p);
	m=1;
	n=15;
	if(p==a[1])
    printf("�����������е�1��Ԫ��");
	else if(p==a[15])
	printf("�����������е�15��Ԫ��");
	else{
	    while(fabs(m-n)!=1){//�۰�������Ѱ�� 
        	N=(m+n)/2;
        	if(a[N]>p)
        	n=N;
        	else if(a[N]<p)
            m=N;
	        else 
	        break;
        }
    }
        if(a[N]==p)//�жϸ����Ƿ��������� 
        printf("�����������е�%d��Ԫ��",N);
	    else 
	    printf("���ڱ��У�");
}

