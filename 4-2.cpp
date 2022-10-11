#include <stdio.h>
#include <math.h>
int main()
{
    void fun1(double p,double q);
    void fun2(double i,double j,double k);
    void fun3(double x,double y,double z);
    double a,b,c,disc;
    printf("请输入方程式的a,b,c三个值：\n");
    scanf("%lf,%lf,%lf",&a,&b,&c);
    if(fabs(a)<=1e-6)
        printf("不是二次方程式!\n");
    else
    {
        disc=b*b-4*a*c;
        if(fabs(disc)<=1e-6)
            fun1(a,b);
        else if(disc>1e-6)
            fun2(a,b,c);
        else
            fun3(a,b,c);
    }
    return 0;
}

void fun1(double p,double q)
{
    printf("ax2+bx+c=0方程式，当b*b - 4*a*c = 0时：\n");
    printf("此方式程有两个相等的实根：%8.4f\n",-q/(2*p));
}

void fun2(double i,double j,double k)
{
    double x,y,z;
    z=j*j-4*i*k;
    x=(-j+sqrt(z))/(2*i);
    y=(-j-sqrt(z))/(2*i);
    printf("ax2+bx+c=0方程式，当b*b - 4*a*c > 0时：\n");
    printf("此方式有两个不相等的实根：%8.4f and %8.4f\n",x,y);     
}

void fun3(double x,double y,double z)
{
    double a,b,c;
    a=y*y-4*x*z;
    b=-y/(2*x);
    c=sqrt(-a)/(2*x);
    printf("ax2+bx+c=0方程式，当b*b - 4*a*c < 0时：\n");
    printf("此方式有两个共轭复根：\t%8.4f+%8.4fi and %8.4f-%8.4fi\n",b,c,b,c);
}

