#include<stdio.h>
int main()
{
    int i,n,r,rev=0;
    scanf("%d",&n);
    int j=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==j)
    printf("True");
    else
    printf("False");
}