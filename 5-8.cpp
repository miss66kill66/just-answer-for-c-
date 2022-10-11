#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,a[16],m,n,p,N,temp=0;
	printf("输入按升序排序的15个数：\n");
	for(i=1;i<=15;i++)
	scanf("%d",&a[i]);
	printf("输入要查询的数：\n");
	scanf("%d",&p);
	m=1;
	n=15;
	if(p==a[1])
    printf("该数是数组中第1个元素");
	else if(p==a[15])
	printf("该数是数组中第15个元素");
	else{
	    while(fabs(m-n)!=1){//折半插入进行寻找 
        	N=(m+n)/2;
        	if(a[N]>p)
        	n=N;
        	else if(a[N]<p)
            m=N;
	        else 
	        break;
        }
    }
        if(a[N]==p)//判断该书是否在数组中 
        printf("该数是数组中第%d个元素",N);
	    else 
	    printf("不在表中！");
}

