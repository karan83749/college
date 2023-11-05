#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character : ");
    scanf("%c",&ch);
    if(ch>=48 && ch<=57)
    printf("character is number");
    else if(ch>=65 && ch<=90)
    printf("character is upper case ");
    else if("ch>=97 && ch<=122")
    printf("character is lower case");
    else
    printf("special character");
    

}