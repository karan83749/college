#include<stdio.h>

void main()
{
    int n;
    int c=0;
    int i;
    scanf("%d",&n);
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
        c=1;
        break;
        }
    }
    if(c==1)
    printf("not");
    else
    printf("prime");

}