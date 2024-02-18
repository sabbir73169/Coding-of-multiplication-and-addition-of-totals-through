#include<stdio.h>
void main()
{
    int a=45,b=1,m=0,sum=0;
    for (b=1;b<=10;b++)
    {
        m=a*b;
        sum=sum+m;
        printf("%d*%d=%d\n",a,b,m);
    }
        printf("total sum:%d",sum);

    return 0;
}
