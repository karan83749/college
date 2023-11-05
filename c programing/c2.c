#include<stdio.h>
int main()
{
    int a,i,flag=0;
    printf("enter marks :");
    for(i=1;i<=5;i++)
    scanf("%d",&a);
    if(a<=33){
    flag=1;  
        }
    if(flag=1)
    printf("fail");
    else
    printf("pass");
    return 0;
}