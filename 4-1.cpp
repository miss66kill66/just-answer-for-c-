#include <stdio.h>
int yue(int a,int b)
{
    int c;
    while(b!=0)
    {
    c=a%b;
    a=b;
    b=c;
    }
    return a;
}
int bei(int a,int b)
{
    int s;
    s=a/yue(a,b)*b;
}
int main()
{
    int a,b,s,n;
    scanf("%d%d",&a,&b);
    s=yue(a,b);
    n=bei(a,b);
    printf("%d ",s);
    printf("%d",n);
    return 0;
}
