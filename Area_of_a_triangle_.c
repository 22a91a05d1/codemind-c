#include<stdio.h>
int sai(int b,int h)
{
    int a;
    a=(b*h)/2;
}
int main()
{
   int b,h;
   scanf("%d%d",&b,&h);
   int z=sai(b,h);
   printf("%d",z);
}