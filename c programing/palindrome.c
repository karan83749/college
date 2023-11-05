#include<stdio.h>
void main()
{
    int x,y=0,r, org;
    printf("enter the value of x : ");
    scanf("%d",&x);
    org=x;
    while(x!=0){
        r=x%10;
        y=y*10+r;
        x=x/10;
    }
//   printf("%d",y);
if(org == y)
{
    printf("Number is Palindrome", org);
}
else
{
    printf("Number is Not Palindrome", org);
}
}