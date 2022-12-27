#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,fac=1;
    for(i=1;i<=n;i++)
    {
        fac=fac*i;
    
    }
    printf("%d",fac);
}