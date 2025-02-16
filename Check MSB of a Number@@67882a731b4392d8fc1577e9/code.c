#include <stdio.h>
void main()
{
    int a,b,msb;
    scanf("%d",&a);
    b=sizeof(a);
    b=b*8;
    msb=1<<(b-1);
    if(a&msb)
    {
        printf("Set");
    }
    else
    {
        printf("Not Set");
    }
}