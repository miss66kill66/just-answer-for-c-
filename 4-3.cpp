#include <stdio.h>
int main()
{
    void prime(int n);
    int a;
    printf("Please enter a number: ");
    scanf("%d",&a);
    prime(a);
    return 0;
}

void prime(int n)
{
    int i;
    for(i=2;i<=n-1;i++)
        if(n%i==0)
            break;
    if(i==n)
        printf("%d is a prime number.\n",n);
    else
        printf("%d is not a prime number.\n",n);
}
