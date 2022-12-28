#include<stdio.h>
int main()
{
    int s;
    scanf("%d",&s);
    int y;
    y=s/3600;
    int y1;
    y1=s%3600;
    int m;
    m=y1/60;
    int s1;
    s1=y1%60;
    printf("H:M:S-%d:%d:%d",y,m,s1);
}