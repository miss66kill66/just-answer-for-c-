#include <stdio.h>
int main()
{
	int a[11]={1,2,3,4,5,7,8,9,10,11};
	int i,t,m;
	printf("输入一个数:\n");
		scanf("%d",&m);
	for(i=0;i<11;i++)
	{
		if(m<a[i])
		{
			t=m;m=a[i];a[i]=t;
		}
	else if(m>a[9])
			a[10]=m;
	}
	  printf("排序后:\n");
    for(i=0;i<11;i++)
		printf("%d ",a[i]);
return 0;
}

