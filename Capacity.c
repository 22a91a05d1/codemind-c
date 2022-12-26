#include<stdio.h>
int main()
{
    int s,t,b;
    scanf("%d%d%d",&s,&t,&b);
    int c;
    c=2*s*t*b*512;
    int c1; 
    c1=c/1024;
    printf("%d KB",c1);
}
