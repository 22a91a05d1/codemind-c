#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c=a+b;
    int d=a-b;
    int e=a*b;
    int f=a/b;
    int g=a%b;
    printf("Sum:%d
Difference:%d
Product:%d
Quotient:%d
Reminder:%d",c,d,e,f,g);
}