#include<stdio.h>
int main()
{
    int d;
    scanf("%d",&d);
    int y;
    y=d/365;
    int y1;
    y1=(d-y*365)/7;
    printf("%d
%d",y,y1);
}