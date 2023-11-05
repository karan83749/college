#include<stdio.h>
void main()
{
    int i,n,a=0,b=1,f;
    printf("enter the value : 4");
    scanf("%d",&n);
    printf("%d %d",a,b);
    for(i=2;i<=n-1;i++)
    {
    f=a+b;
    printf(" %d ",f);
    a=b;
    b=f;
    }
}