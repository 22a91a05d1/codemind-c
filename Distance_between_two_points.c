#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    float z;
    z=sqrt((c-a)*(c-a)+(d-b)*(d-b));
    printf("%0.4f",z);
}