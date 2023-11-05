#include<stdio.h>
void main()
{
    int i,n,m;
    printf("enter the value of n&m : ");
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
        for(i=1;i<=m;i++)
        {
        if(n%i==0 && m%i==0)
        {
            printf(" %d ",i);
        }
        }
    }
    
}
