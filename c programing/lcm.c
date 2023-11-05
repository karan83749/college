#include<stdio.h>
void main()
{
    int i,j,l;
    printf("enter the value of i and j : ");
    scanf("%d%d",&i,&j);
    for(l=1;l<=i*j;l++)
    if(l%i==0 && l%j==0)
    break;
    printf("lcm is %d",l);
}